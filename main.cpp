//Intermediate19.cpp - displays the account balance at
//the end of 1 through 3 years
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
double getBalance(int amount, double rate, int y);

int main()
{
	int deposit = 0;
	double interestRate = 0.0;
	double acctBalance = 0.0;

	cout << "Deposit: ";
	cin >> deposit;
	cout << "Rate (in decimal form): ";
	cin >> interestRate;

	cout << fixed << setprecision(2);
	for (int year = 1; year < 4; year += 1)
	{
		acctBalance = 
			getBalance(deposit, interestRate, year);
		cout << "Year " << year << ": $" 
			<< acctBalance  << endl;
	}  //end for

	return 0;
}   //end of main function

//*****function definitions*****
double getBalance(int amount, double rate, int y)
{
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
	return balance;
}  //end of getBalance function