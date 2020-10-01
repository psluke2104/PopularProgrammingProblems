#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}

int partition(int arr[], int low, int high) {

  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {

  if (low < high) {
    int pi = partition(arr, low, high);

    // Sort the elements on the left of pivot
    quickSort(arr, low, pi - 1);

    // Sort the elements on the right of pivot
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 1, 9, 88, 0, 7, 25, 55, 33, 10, 40, 19, 23, 32, 47, 29 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Quick Sort\n\n";

	cout << "Given array is \n";
	printArray(arr, n);

	clock_t s, e;
	s = clock();

	quickSort(arr, 0, n - 1);

    Sleep(100);
	e = clock();

	cout << "\nSorted array is \n";
	printArray(arr, n);

	cout << fixed << setprecision(5);
    cout << "\nTime => " << float(e-s)/CLK_TCK << "\n";
	return 0;
}
