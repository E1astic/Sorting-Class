#include "Sorting.h"

Sorting::Sorting(int _size)
{
	size = _size;
	arr = new int[size];
}
Sorting::Sorting(int* _arr, int _size)
{
	size = _size;
	arr = new int[size];
	for (int i = 0; i < size; ++i)
		arr[i] = _arr[i];
}

void Sorting::fillArray()
{
	int n = size;
	while (n > 0)
	{
		for (int i = 0; i < size; ++i)
		{
			int elem;
			cout << "elem = ";
			cin >> elem;
			arr[i] = elem;
		}

		--n;
	}
}

//					���������� ��������

void Sorting::Merge(int*& part1, int size1, int*& part2, int size2, int*& arr, int size)
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)		// ������� 2 �����, ��������
	{
		if (part1[i] < part2[j])
		{
			arr[k] = part1[i];
			++i;
		}
		else
		{
			arr[k] = part2[j];
			++j;
		}
		++k;
	}

	if (i == size1)						// �������� ���������� ��������
	{
		while (j < size2)
		{
			arr[k] = part2[j];
			++j;
			++k;
		}
	}
	else
	{
		while (i < size1)
		{
			arr[k] = part1[i];
			++i;
			++k;
		}
	}
}

void Sorting::mergeSort(int*& arr, int size)
{
	if (size > 1)
	{
		int* part1; int size1;  			//����� ������ �� 2 �����
		int* part2; int size2;
		
		size1 = size / 2;
		size2 = size - size1;

		part1 = new int[size1];
		for (int i = 0; i < size1; ++i)
			part1[i] = arr[i];

		part2 = new int[size2];
		for (int i = 0; i < size2; ++i)
			part2[i] = arr[size1 + i];

		mergeSort(part1, size1);  							//���������� ������ ������� ������ ������, ���� �� �������� �� �� ��������� ���������
		mergeSort(part2, size2);
		Merge(part1, size1, part2, size2, arr, size); 		//������� ��� ����� � ����, �������� 
		
		delete[] part1;
		delete[] part2;
	}

}
void Sorting::MergeSort()
{
	mergeSort(arr, size);
}



//			������� ����������
int Sorting::indexPartition(int*& arr, int left, int right)
{
	int pivot = arr[right];
	int indPartition = left;
	for (int i = left; i < right; ++i)
	{
		if (arr[i] <= pivot)
		{
			swap(arr[i], arr[indPartition]);
			++indPartition;
		}
	}
	swap(arr[indPartition], arr[right]);
	return indPartition;
}

void Sorting::quickSort(int*& arr, int left, int right)
{
	if(left<right)
	{
		int ind = indexPartition(arr, left, right);
		quickSort(arr, left, ind-1);
		quickSort(arr, ind + 1, right);
	}
}


void Sorting::QuickSort()
{
	quickSort(arr, 0, size-1);
}



void Sorting::print()
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
}
void Sorting::print(int*arr, int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
}

