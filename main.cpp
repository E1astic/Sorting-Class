#include "Sorting.h"


int main()
{
	int* arr = new int[10] {5, 3, 7, 0, 9, 2, 4, 1, 3, 5};
	Sorting sort(arr, 10);

	sort.print();
	//sort.MergeSort();
	sort.InsertionSort();
	//quickSort(arr, 0, 9);

	sort.print();
	/*for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << '\n';*/
	

	cin.get();
	return 0;
}