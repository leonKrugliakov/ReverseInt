//****************************************************************************************************
//
//      File:                ReverseInt.cpp
//
//      Student:             Leon Krugliakov
//
//      Assignment:          Program #1
//
//      Course Name:         Data Structures II
//
//      Course Number:       COSC 3100 - 11
//
//      Due:                 October 27th, 2020
//
//
//      This program takes in an integer from the user and reverses
//		it using recursion.
//
//      Other files required:
//
//****************************************************************************************************

#include <iostream>

//****************************************************************************************************

using namespace std;

//****************************************************************************************************

int reverse(int value);

//****************************************************************************************************

int main()
{
	int input;

	cout << "Please enter an integer: ";

	cin >> input;

	cout << endl << "The reversed integer is: " << reverse(input);

	return 0;
}

//****************************************************************************************************

int reverse(int input)
{
	static int result = 0;
	static int position = 1;

	if (input > 0) 
	{
		reverse(input / 10);
		result += (input % 10) * position;
		position *= 10;
	}

	return result;
}

//****************************************************************************************************

/*
Please enter an integer: 123456

The reversed integer is: 654321
*/
