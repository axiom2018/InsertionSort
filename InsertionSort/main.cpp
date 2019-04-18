// main.cpp
#include <iostream>
#include <conio.h>
#include "InsertionSortAlgorithm.h"

/*
Algorithm: Insertion Sort.
Author: Omar Moodie.
Github link: https://github.com/axiom2018
Date: 4/18/2019
Best case: O(n)
Average case: O(n^2)
Worst case: O(n^2)
*/

int main()
{
	// Create the algorithm class object.
	InsertionSortAlgorithm isa;

	// Sample array of different sizes with random values.
	int firstArray[7] = { 52, 1, 4, 100, 67, 5, 77 };
	int secondArray[3] = { 8, 17, 5 };
	int thirdArray[8] = { 3, 3, 3, 45, 3, 32, 11, 5 };
	int fourthArray[2] = { 2, 4 };
	int fifthArray[5] = { 9, 56, 68, 25, 26 };
	int sixthArray[5] = { 50, 40, 30, 20, 10 };

	// Call insertion sort and print the array.
	isa.InsertionSort(firstArray, 7);
	isa.PrintArray(firstArray, 7);

	// Call insertion sort and print the array.
	isa.InsertionSort(secondArray, 3);
	isa.PrintArray(secondArray, 3);

	// Call insertion sort and print the array.
	isa.InsertionSort(thirdArray, 8);
	isa.PrintArray(thirdArray, 8);

	// Call insertion sort and print the array.
	isa.InsertionSort(fourthArray, 2);
	isa.PrintArray(fourthArray, 2);

	// Call insertion sort and print the array.
	isa.InsertionSort(fifthArray, 5);
	isa.PrintArray(fifthArray, 5);

	// Call insertion sort and print the array.
	isa.InsertionSort(sixthArray, 5);
	isa.PrintArray(sixthArray, 5);

	_getch();
	return 0;
}