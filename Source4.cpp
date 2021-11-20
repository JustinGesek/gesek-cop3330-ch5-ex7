#include <iostream>
#include <cmath>
#include "Coefficient.h"

using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Justin Gesek
 */

int main()
{
	double a;
	double b;
	double c;

	cout << "Enter coefficient a: ";
	cin >> a;
	cout << "Enter coefficient b: ";
	cin >> b;
	cout << "Enter coefficient c: ";
	cin >> c;

	double term = b * b - 4 * a * c;

	if (term < 0)
	{
		cout << "The quadratic equasion, " << a << "x^2 + " << b << "x + " << c << " = 0, has no real roots." << endl;
		return 0;
	}
	double root1 = (-b + sqrt(term)) / (2 * a);
	double root2 = (-b - sqrt(term)) / (2 * a);
	cout << "The quadratic equasion, " << a << "x^2 + " << b << "x + " << c << " = 0, has two real roots: " << root1 << " and " << root2 << endl;

}