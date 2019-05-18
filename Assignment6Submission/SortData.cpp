#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <time.h>
#include "SortData.h"

using namespace std;
using namespace std::chrono;

SortData::SortData()
{

	//do nothing. Default constructor
}
SortData::SortData(string inputFile)
{
	populateArray(inputFile);
}

SortData::~SortData()
{

}

void SortData::populateArray(string fileToBeProcessed)
{
	ifstream inputStream(fileToBeProcessed);
	string numOfValues;

	getline(inputStream, numOfValues);

	int numOfValuesInt = stoi(numOfValues);

	vectorDoubles.resize(numOfValuesInt);

	int i = 0;

	while(!inputStream.eof())
	{
		string doubleValueAsString;
		getline(inputStream, doubleValueAsString);
		/*while(doubleValueAsString == "") //while getline is reading an empty string. This accounts for an error if there is an unnecessary blank line between two values
		{
			getline(inputStream, doubleValueAsString);
		}*/

		try
		{
			double doubleValue = stod(doubleValueAsString);
			vectorDoubles.push_back(doubleValue);
		}
		catch(invalid_argument& error)
		{
			cout << "Error in converting from string to double" << endl;
			exit(1);
		}
		++i;
	}

	inputStream.close();
}

void SortData::QuickSort() //the quicksort sorting algorithm
{
	//all required to get the current time stamp
	time_t theTime;
	struct tm* timeinfo;
	time(&theTime);
	timeinfo = localtime(&theTime);
	cout << "Starting time: " << asctime(timeinfo);
	//

	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	QuickSortAlgorithm QuickSort(vectorDoubles, 0, vectorDoubles.size() - 1); //run QuickSort

	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = t2 - t1;

	//required to get the ending time stamp
	time(&theTime);
	timeinfo = localtime(&theTime);
	cout << "Ending time: " << asctime(timeinfo) << endl;
	cout << "Duration: " << time_span.count() << "seconds" << endl;
	cout << " " << endl; //formatting
}

void SortData::BubbleSort()
{

	//all required to get the current time stamp
	time_t theTime; //time object
	struct tm* timeinfo;
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //convert the current time to the current local timezone
	cout << "Starting time: " << asctime(timeinfo) << endl; //asctime converts timeinfo into a string
	//

	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	BubbleSortAlgorithm BubbleSort(vectorDoubles, vectorDoubles.size()); //run BubbleSort

	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = t2 - t1;

	//required to get the ending time stamp
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //conver the current time to the current local timezone
	cout << "Ending time: " << asctime(timeinfo); //asctime converts timeinfo into a string
	cout << "Duration: " << time_span.count() << "seconds" << endl;
	cout << " " << endl;
	//
}

void SortData::InsertionSort()
{
	//all required to get the current time stamp
	time_t theTime; //time object
	struct tm* timeinfo;
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //convert the current time to the current local timezone
	cout << "Starting time: " << asctime(timeinfo) << endl; //asctime converts timeinfo into a string
	//

	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	InsertionSortAlgorithm InsertionSort(vectorDoubles, vectorDoubles.size()); //run InsertionSort

	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = t2 - t1;

	//required to get the ending time stamp
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //conver the current time to the current local timezone
	cout << "Ending time: " << asctime(timeinfo); //asctime converts timeinfo into a string
	cout << "Duration: " << time_span.count() << "seconds" << endl;
	//
}

void SortData::SelectionSort() //run Selection Sort
{
	//all required to get the current time stamp
	time_t theTime; //time object
	struct tm* timeinfo;
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //convert the current time to the current local timezone
	cout << "Starting time: " << asctime(timeinfo) << endl; //asctime converts timeinfo into a string
	//

	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	SelectionSortAlgorithm SelectionSort(vectorDoubles, vectorDoubles.size()); //run selection sort

	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = t2 - t1;

	//required to get the ending time stamp
	time(&theTime); //get the current calendar time
	timeinfo = localtime(&theTime); //conver the current time to the current local timezone
	cout << "Ending time: " << asctime(timeinfo); //asctime converts timeinfo into a string
	cout << "Duration: " << time_span.count() << " seconds" << endl;
	cout << "" << endl;
	//
}

void SortData::printSortedArray(vector<double> theVector)
{
	for (int i = 0; i < theVector.size(); ++i)
	{
		cout << theVector[i] << ",";
	}
	cout << endl;
}
