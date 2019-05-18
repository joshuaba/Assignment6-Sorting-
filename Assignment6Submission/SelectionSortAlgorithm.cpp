#include "SelectionSortAlgorithm.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

SelectionSortAlgorithm::SelectionSortAlgorithm()
{
	//do nothing. No member variables
}

SelectionSortAlgorithm::SelectionSortAlgorithm(vector<double> theVector, int size)
{
	selectionSort(theVector, size); //run selectionSort algorithm
}

SelectionSortAlgorithm::~SelectionSortAlgorithm()
{
	//do nothing. No memory dynamically allocated in this class
}

void SelectionSortAlgorithm::selectionSort(vector<double> theVector, int size)
{
	int i, j, minIndex;

	//One by one move the boundary of the unsorted subarray
	for (i = 0; i < size - 1; ++i)
	{
		//find the minimum element in the unsorted array
		minIndex = i;
		for (j = i + 1; j < size; ++j)
		{
			if(theVector[j] < theVector[minIndex])
				minIndex = j;
		}

		//swap the ound minimum element with the first element
		swap(&theVector[minIndex], &theVector[i]);
	}

	cout << "Sorted values: ";
	printVector(theVector);
}

void SelectionSortAlgorithm::swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSortAlgorithm::printVector(vector<double> theVector)
{
	for (int i = 0; i < theVector.size(); ++i)
	{
		cout << theVector[i] << ", ";
	}
	cout << endl;
}
