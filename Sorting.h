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

	void bubbleSort();
	void SelectionSort();
	
	void InsertionSort();
	void MergeSort();
	void QuickSort();
	
	void print();
	void print(int*arr, int size);
	
};