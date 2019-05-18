#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "QuickSort.h"

using namespace std;

QuickSortAlgorithm::QuickSortAlgorithm()
{
	//do nothing. No member variables
}

QuickSortAlgorithm::QuickSortAlgorithm(vector<double> theVector, int left, int right)
{
	quickSort(theVector, left, right); //run the quicksort algorithm
}

QuickSortAlgorithm::~QuickSortAlgorithm()
{
	//do nothing. No dynamically-allocated memory
}

void QuickSortAlgorithm::quickSort(vector<double> theVector, int left, int right) //run the quicksort algorithm
{
	int i = left;
	int j = right;
	double temp;
	double pivot = theVector[(left+right)/2];

	//partition

	while(i <= j)
	{
		while(theVector[i] < pivot)
			i++;
		while(theVector[j] > pivot)
			j--;
		if(i <= j)
		{
			temp = theVector[i];
			theVector[i] = theVector[j];
			theVector[j] = temp;
			i++;
			j--;
		}
	}

	//recursion
	if(left < j)
		quickSort(theVector, left, j);

	if(i < right)
		quickSort(theVector, i, right);

	if(!(left < j) && !(i < right))
		printVector(theVector);

}

void QuickSortAlgorithm::printVector(vector<double> vectorToPrint)
{
	for (int i = 0; i < vectorToPrint.size(); ++i)
	{
		cout << vectorToPrint[i] << ", ";
	}
	cout << endl;
	cout << "" << endl;
}
