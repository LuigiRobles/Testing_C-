 //Intermediate19.cpp - displays the account balance at
//the end of 1 through 3 years
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
void getBalance(int amount, 
                double &rate, 
                int &y);
void displayBalance();

int main()
{
	int deposit = 0;
	double acctBalance = 0.0;
    double lowestRate = 0.0;
    double highestRate = 0.0;

	cout << "Deposit: ";
	cin >> deposit;
	cout << "Lowest Rate (in decimal form): ";
	cin >> lowestRate;
    cout << "Highest Rate (in decimal form): " ;
    cin >> highestRate;
    
	cout << fixed << setprecision(2);
	for (int year = 1; year < 4; year += 1)
	{
			getBalance(deposit,lowestRate, year);
		cout << "Year " << year << ": $" 
			<< acctBalance  << endl;
	}  //end for
    return 0;
}   //end of main function

//*****function definitions*****
void getBalance(int amount, double &rate, int &y)
{
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
}  //end of getBalance function

void displayBalance()
{
    cout << " "
}