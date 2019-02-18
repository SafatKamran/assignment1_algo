#include <iostream>

#define size 13

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int *arr,int st, int end)
{
	int pivot = arr[st];

	int i = st;

	for(int j = st+1; j <= end; ++j)
	{
		if(arr[j] < pivot)
		{
			++i;

			swap(arr+i, arr+j);
		}
	}

	swap(arr+st, arr+i);

	return i;
}

void quickSort(int *arr, int st, int end)
{
	if(st < end)
	{
		int mid = partition(arr, st, end);

		quickSort(arr, st, mid-1);
		quickSort(arr, mid+1, end);
	}
}


int main()
{
	int i;
	int arr[size];

	for(i = 0; i < size; ++i)
		std::cin >> arr[i];

	quickSort(arr, 0, size-1);

	for(i = 0; i < size; ++i)
		std::cout << arr[i] << " ";

	std::cout << std::endl;

	return 0;
}
