/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Anthony Shiller
*/
#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
try
{
	string operation;
	double value1 = 0;
	double value2 = 0;
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two values: ";

	while(cin >> operation >> value1 >> value2) {

		double res = 0;
		if (operation=="plus" || operation=="+") res = value1+value2;
		else if (operation=="minus" || operation=="-") res = value1-value2;
		else if (operation=="mul" || operation=="*") res = value1*value2;
		else if (operation=="div" || operation=="/") {
			if (value2==0) error("trying to divide by zero");
			res = value1/value2;
		}
		else error("sorry: bad operator: ",operation);

		cout << value1 << operation << value2 << " == " << res <<'\n';
		cout << "Please try again: ";
	}
	cout << "exit because of bad input\n";
}
catch (runtime_error e) {
	cout << e.what() << '\n';
}

