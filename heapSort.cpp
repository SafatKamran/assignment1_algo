
#include <iostream>

#define size 13

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a; *a = *b; *b = tmp;
}

void maxHeapify(int *arr, int i, int n)
{
	int l = 2*i;
	int r = 2*i+1;
	int largest;

	if(l <= n && arr[l] > arr[i])
		largest = l;
	else
		largest = i;

	if(r <= n && arr[r] > arr[largest])
		largest = r;

	if(largest != i)
	{
		swap(arr+largest, arr+i);

		maxHeapify(arr, largest, n);
	}

}

void buildMaxHeap(int *arr, int n)
{
	for(int i = n/2; i > 0; --i)
		maxHeapify(arr, i, n);
}

void decendingSort(int *arr, int n)
{
	buildMaxHeap(arr, n);

	for(int i = n; i > 0; --i)
	{
		std::cout << arr[1] << " ";
		swap(arr+1, arr+i);
		maxHeapify(arr, 1, i-1);
	}
}

int main()
{
	int arr[size+1];

	for(int i = 1; i <= size; ++i)
		std::cin >> arr[i];

	decendingSort(arr, size);

	return 0;
}
