#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "SortData.h"


using namespace std;

int main(int argc, char** argv)
{
	cout << "A sorting algorithm" << endl << "Please provide the name of the input file: ";
	string inputFileName; //name of the input file from which to read the double values
	cin >> inputFileName;
	SortData sortingAlgorithm1(inputFileName);

	cout << endl; //formatting
	cout << "QuickSort: " << endl;
	sortingAlgorithm1.QuickSort(); //sort the algorithm using quicksort

	cout << " " << endl; //formatting
	cout << "Bubble sort: " << endl << endl;
	sortingAlgorithm1.BubbleSort();

	cout << " " << endl; //formatting
	cout << "Insertion Sort: " << endl;
	sortingAlgorithm1.InsertionSort();

	cout << " " << endl; //formatting
	cout << "Selection Sort: " << endl;
	sortingAlgorithm1.SelectionSort();
	//sortingAlgorithm1.printOriginalArray();
}
