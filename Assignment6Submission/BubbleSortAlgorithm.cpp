#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <time.h>
#include "BubbleSortAlgorithm.h"

BubbleSortAlgorithm::BubbleSortAlgorithm() //default constructor
{
	//do nothing
}

BubbleSortAlgorithm::BubbleSortAlgorithm(vector<double> theVector, int size)
{
	bubbleSort(theVector, size);
}

BubbleSortAlgorithm::~BubbleSortAlgorithm() //destructor
{
	//do nothing. No memory dynamically allocated
}

void BubbleSortAlgorithm::swap(double *a, double *b) //swap algorithm. Used in the bubble sort algorithm to swap the position of two values
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSortAlgorithm::bubbleSort(vector<double> theVector, int size) //bubble sort algorithm
{
	int i, j;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - 1; ++j)
		{
			if (theVector[j] > theVector[j+1])
			{
				swap(&theVector[j], &theVector[j+1]);
			}
		}
	}

	cout << "Sorted values: ";
	printVector(theVector);
}

void BubbleSortAlgorithm::printVector(vector<double> theVector)
{
	for (int i = 0; i < theVector.size(); ++i)
	{
		cout << theVector[i] << ", ";
	}
	cout << endl;
}
