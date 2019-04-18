// InsertionSortAlgorithm.cpp
#include "InsertionSortAlgorithm.h"
#include <iostream>

void InsertionSortAlgorithm::InsertionSort(int arr[], const int & size)
{
	/* Begin the initial loop. Begin at index 1 so we have something to compare the index 1 too. Arrays are 0-n, if we start with 0, we do not have anything to look 
	back to in order to compare because there are no negative indexes in the array. 
	
	Example array: 50, 40, 30, 20, 10. In this example array, i will be at the same index of 40. */
	for (int i = 1; i < size; ++i)
	{
		/* Save the key, the key is the current entry the index is pointing too. We'll use it to begin comparing what's behind us in the array. In the example array
		the key will start out as 40. */
		int key = arr[i];

		// The variable j keeps index to the previous value to help our backtracking. In the example array, this index will be 0, at index 0 is 50.
		int j = i - 1;

		/* Nested while loop asks 2 questions.
		1) Is j, the index we use to backtrack the array, in RANGE of the array? (0-n).
		2) Is the previous entry in the array with index j GREATER than the key?
		If both are true we begin switching things around. 
		
		In the examle array the second part asks "Is 50 bigger than 40?" Of course it is. */
		while (j >= 0 && arr[j] > key)
		{
			/* Here we take what's in FRONT of j, and set it TO j. We're shifting elements in this while loop. In the example array it WAS 50, 40, 30, 20, 10.
			But now it'll be 50, 50, 30, 20, 10. But don't worry! We didn't lose the value of 40, it's still saved in key and will find a new home soon. */
			arr[j + 1] = arr[j];

			/* Decrement j because we need to continue looking back and potentially shift another element. In the example array however, when the below line of code 
			runs, j will be -1. Remember arrays are indexed 0-n. No negative indexing in an array so this while loop will break. */
			j = j - 1;
		}

		/* When we find a position for the key, we insert it. In the example array we still have 50, 50, 30, 20, 10. j is currently -1 and we must place it somewhere.
		We increment j by 1 to get the correct position and set the key. In the example array, when the while loop breaks for the first time j will be -1, meaning we
		can't go further back. So the key must be placed all the way in the front. We simply increment j by 1 and now we have 40, 50, 30, 20, 10 for an array. */
		arr[j + 1] = key;
	}
}

// Simple function to display the array given.
void InsertionSortAlgorithm::PrintArray(int arr[], const int & size) const
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}
