#pragma once
#include<iostream>
using namespace std;

class Sorting
{
	int* arr;
	int size;

	void Merge(int*& part1, int size1, int*& part2, int size2, int*& arr, int size);
	void mergeSort(int*& arr, int size);

	void quickSort(int*& arr, int left, int right);
	int indexPartition(int*& arr, int left, int right);
	

public:
	Sorting(int _size);
	Sorting(int* _arr, int _size);
	void fillArray();

	void bubbleSort()
	{
		for (int i = 1; i < size; ++i)
		{
			for (int j = 0; j < size - i; ++j)
			{
				if (arr[j+1] < arr[j])
					swap(arr[j], arr[j + 1]);
			}
		}
	}
	void SelectionSort()
	{
		for (int i = 0; i < size-1; ++i)
		{
			int imin = i;
			for (int j = i + 1; j < size; ++j)
			{
				if (arr[j] < arr[imin])
					imin = j;
			}
			swap(arr[i], arr[imin]);
		}
	}

	void MergeSort();
	void QuickSort();
	
	void print();
	void print(int*arr, int size);
	
};