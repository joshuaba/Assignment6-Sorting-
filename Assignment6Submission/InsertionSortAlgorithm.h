#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

class InsertionSortAlgorithm
{
	public:
		InsertionSortAlgorithm(); //default constructor
		InsertionSortAlgorithm(vector<double> theVector, int n); //overloaded constructor
		~InsertionSortAlgorithm(); //destructor

		void insertionSort(vector<double> theVector, int n); //the quicksort algorithm
		void printSortedVector(vector<double> theVector);
		//void swap(double* a, double* b); //the swap feature to be used in the quicksort algorithm
		//void partition(double array[], int low, int high); //the partition function is used in the quickSort algorithm. It performs the majority of the algorithm

	private:
		//no member variables, since the class is only used as a container for the quicksort method. The array to be sorted will be passed into the class constructor.
};
