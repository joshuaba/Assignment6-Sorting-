#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <chrono>
#include <vector>
#include "QuickSort.h"
#include "BubbleSortAlgorithm.h"
#include "InsertionSortAlgorithm.h"
#include "SelectionSortAlgorithm.h"

using namespace std;

class SortData
{
	public:
		SortData(); //no-arg constuctor
		SortData(string inputFile); //overloaded constructor. Will initialize the doubleArr array with the values read in from inputFile
		~SortData(); //destructor

		void populateArray(string fileToBeProcessed); //populate the array of doubles from the inputFile
		void QuickSort(); //quicksort algorithm to sort the data
		void InsertionSort(); //insertion sort algorithm to sort the data
		void BubbleSort(); //bubble sort algorithm to sort the data
		void SelectionSort(); //selection sort algorithm -- O(n^2)
		void printOriginalArray();//print the unsorted array
		void printSortedArray(vector<double> theVector); //prints sorted array

	private:
		vector<double> vectorDoubles;
		//QuickSortAlgorithm quickSortAlgorithm;
};
