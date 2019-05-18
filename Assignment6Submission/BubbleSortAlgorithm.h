#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

class BubbleSortAlgorithm
{
	public:
		BubbleSortAlgorithm(); //default constructor
		BubbleSortAlgorithm(vector<double> theVector, int size); //overloaded constructor
		~BubbleSortAlgorithm(); //destructor

		void swap(double* a, double* b);
		void bubbleSort(vector<double> theVector, int size); //the quicksort algorithm
		void printVector(vector<double> theVector); //print the sorted vector
		//void swap(double* a, double* b); //the swap feature to be used in the quicksort algorithm
		//void partition(double array[], int low, int high); //the partition function is used in the quickSort algorithm. It performs the majority of the algorithm

	private:
		//no member variables, since the class is only used as a container for the quicksort method. The array to be sorted will be passed into the class constructor.
};
