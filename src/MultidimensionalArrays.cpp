/*
 * MultidimensionalArrays.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	// Rows then cols
	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};

	cout << "This is a multidimensional array of animals" << endl;
	cout << "===========================================" << endl;

	// Iterate over the rows
	for(int i = 0; i < 2; i ++)
	{
		// Iterate over the cols
		for(int j = 0; j < 3; j ++)
		{
			cout << animals[i][j] << " " << flush;

		}

		cout << endl;

	}


	cout << endl << "This is a multidimensional array of numbers" << endl;
	cout << "===========================================" << endl;

	int hundredSquare [10][10];


	// Rows
	for(int i = 0; i < 10; i ++)
	{

		//Cols
		for(int j = 0; j < 10; j ++)
		{
			hundredSquare[i][j] = (i + 1) * (j + 1);
		}
	}

	for(int i = 0; i < 10; i ++)
	{

		for(int j = 0; j < 10; j ++)
		{
			cout << "[ " << hundredSquare[i][j] << " ],\t" << flush;

		}

		cout << endl;
	}




























	return 0;
}


