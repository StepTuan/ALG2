#include "Header.h"
#include <iomanip>
#include <iostream>
#include <locale>
#include <chrono>

using namespace std;
int main()
{
	int arrlength;
	int bogoarrlength;
	int value;

	arrlength = 15;
	bogoarrlength = 10;

	Array arr(arrlength);
	Array Bogoarr(bogoarrlength);
	Char_Array arrC(arrlength);
	int test_array[15] = { 3, 9, 8, 1, 3, 4, 9, 9, 1, 5, 3, 6, 0, 0, 5 };
	int bogo_array[10] = { 8, 2, 3, 2, 9, 6, 9, 4, 0, 3 };

	cout << "array (QuickSort) ";
	for (int i = 0; i < arrlength; i++)
	{
		cout << test_array[i] << " ";
	}

	cout << endl; cout << endl;

	for (int i = 0; i < arrlength; i++)
	{
		arr.filling(i, test_array[i]);
	}

	arr.quicksort(0, 14);

	cout << "array after QuickSort ";

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr.getValue(i) << " ";
	}

	cout << endl; cout << endl;

	cout << "array (BogoSort) ";
	for (int i = 0; i < bogoarrlength; i++)
	{
		cout << bogo_array[i] << " ";
	}

	cout << endl; cout << endl;

	for (int i = 0; i < bogoarrlength; i++)
	{
		Bogoarr.filling(i, bogo_array[i]);
	}

	Bogoarr.BogoSort();

	cout << "array after BogoSort - ";

	for (int i = 0; i < bogoarrlength; i++)
	{
		cout << Bogoarr.getValue(i) << " ";
	}

	cout << endl; cout << endl;

	cout << "array (BubbleSort) ";
	for (int i = 0; i < arrlength; i++)
	{
		cout << test_array[i] << " ";
	}

	cout << endl; cout << endl;

	for (int i = 0; i < arrlength; i++)
	{
		arr.filling(i, test_array[i]);
	}

	arr.BubbleSort();

	cout << "array after BubbleSort - ";

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr.getValue(i) << " ";
	}

	cout << endl; cout << endl;

	arr.BinarySearch(4);

	cout << endl; cout << endl;

	for (int i = 0; i < arrlength; i++)
	{
		arrC.filling(i, test_array[i] + '0');
	}

	arrC.CountingSort();

	cout << "array after CountingSort - ";

	for (int i = 0; i < arrlength; i++)
	{
		cout << arrC.getValue(i) << " ";
	}
	cout << endl; cout << endl;
}