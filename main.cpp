// CIT125 Intro To C++ Luigi Robles
// 07-20-2020 Summer Term
// Ch.10 Number 19 Modify fig 9-19 savings acct program to use a void function)
// displays the account balance at
// the end of 1 through 3 years

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
void getBalance(int amount, double rate, int y);
int main()
{
    //declare and initialize variables
	int deposit = 0;
	double minimumRate = 0.0;
    double maximumRate = 0.0;
	double acctBalance = 0.0;

    //input part of IPO
	cout << "Deposit: ";
	cin >> deposit;
	cout << "Minimum Rate (in decimal form): ";
	cin >> minimumRate;
    cout << "Maximum Rate (in decimal form): ";
    cin >> maximumRate;

    //outter for loop
    for (double rate = minimumRate; rate <= maximumRate; rate += .01)
       {
           cout << fixed << setprecision(0);
           cout << "Rate: " << rate * 100 << "%" << endl;

            //inner for loop
           	cout << fixed << setprecision(2);
	        for (int year = 1; year < 4; year += 1)
	        {
		        acctBalance = deposit * pow((1 + rate ), year); 
			        getBalance(deposit,rate, year);
		                cout << "Year " << year << ": $" 
			                << acctBalance  << endl;
            }   //end inner loop
       }//end outter loop
    return 0;
}   //end of main function

//*****function definitions*****
void getBalance(int amount, double rate, int y)
{
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
}  //end of getBalance function