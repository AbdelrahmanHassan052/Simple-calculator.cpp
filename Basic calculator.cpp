//Program : Simple calculator
//Author: Abdelrahman Hassan
//Date : November 2025
/* 
-------------------------------------------
Description :
A basic command - line calculator that
supports addition, subtraction,
multiplication, division, and power.
Created for practicing C++ fundamentals :
	-Functions
	- Loops
	- Conditions
	- Basic I / O

	Future improvements planned.
-------------------------------------------
	*/

#include <iostream>
#include <cmath>
using namespace std;
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double a, double b) { return pow(a, b); }

int main() {
	char again = 'y';
	while (again == 'y' || again == 'Y')
	{
		int choice;
		double num1, num2, result;

		cout << "\n================= CALCULATOR MENU =================\n";
		cout << "1.Addition (+) \n";
		cout << "2.Subtraction (-) \n";
		cout << "3.Multiplication (*) \n";
		cout << "4.Division (/) \n";
		cout << "5.Power (^) \n";
		cout << "\n===================================================\n";
		cout << "Choose operation (1-5) : ";
		cin >> choice;

		cout << "Enter first number : ";
		cin >> num1;

		cout << "Enter second number : ";
		cin >> num2;

		if (choice == 1)
			result = add(num1, num2);

		else if (choice == 2)
			result = subtract(num1, num2);

		else if (choice == 3)
			result = multiply(num1, num2);

		else if (choice == 4) {
			if (num2 == 0)
			{
				cout << "\n Error : Division by zero is not allowed ! \n";
				continue;
			}
			result = divide(num1, num2);
		}
			

		else if (choice == 5)
			result = power(num1, num2);

		else {
			cout << "Invalid choice ! PLease select 1-5 . \n";

			continue;
		}
		cout << "\n Result = " << result << "\n";

		cout << "\n Do you want to calculate again ? (y/n) : ";
		cin >> again;
	}
	cout << "\n Thanks for using the calculator ! \n";
	return 0;
}