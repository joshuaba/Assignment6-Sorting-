#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

class QuickSortAlgorithm
{
	public:
		QuickSortAlgorithm(); //default constructor
		QuickSortAlgorithm(vector<double> theVector, int left, int right); //overloaded constructor
		~QuickSortAlgorithm(); //destructor

		void quickSort(vector<double> theVector, int left, int right); //the quicksort algorithm
		void printVector(vector<double> theVector);
		//void swap(double* a, double* b); //the swap feature to be used in the quicksort algorithm
		//void partition(double array[], int low, int high); //the partition function is used in the quickSort algorithm. It performs the majority of the algorithm

	private:
		bool finalRun;
		//no member variables, since the class is only used as a container for the quicksort method. The array to be sorted will be passed into the class constructor.
};
