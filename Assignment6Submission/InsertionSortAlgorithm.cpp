#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "InsertionSortAlgorithm.h"

InsertionSortAlgorithm::InsertionSortAlgorithm() //default constructor
{
	//do nothing
}

InsertionSortAlgorithm::InsertionSortAlgorithm(vector<double> theVector, int n) //overloaded constructor
{
	insertionSort(theVector, n); //call the insertionSort algorithm
}

InsertionSortAlgorithm::~InsertionSortAlgorithm() //destructor
{
	//no memory dynamically allocated here
}

void InsertionSortAlgorithm::insertionSort(vector<double> theVector, int n) //insertion sort algorithm
{
	int i, j;
	double key;

	for (i = 1; i < n; ++i)
	{
		key = theVector[i];
		j = i - 1;

		/*Move elements of theVector[0...i-1] that are greater than the key to one position ahead of their current position */

		while(j >= 0 && theVector[j] > key)
		{
			theVector[j+1] = theVector[j];
			j = j - 1;
		}
		theVector[j+1] = key;
	}

	cout << "Sorted values: ";
	printSortedVector(theVector);
}

void InsertionSortAlgorithm::printSortedVector(vector<double> theVector)
{
	for (int i = 0; i < theVector.size(); ++i)
	{
		cout << theVector[i] << ", ";
	}
	cout << endl;
}


