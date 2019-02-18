#include <iostream>

#define sen 100
#define size 10

void merge(int *a, int p, int q, int r)
{
	int i, j;
	int n1 = q - p + 1;
	int n2 = r - q;

	int left[n1+1], right[n2+1];

	for(i = 0; i < n1; ++i)
		left[i] = a[p+i];

	for(i = 0; i < n2; ++i)
		right[i] = a[q+1+i];

	left[n1] = sen; right[n2] = sen;

	i = 0; j = 0;

	for(int k = p; k <= r; ++k)
	{
		if(left[i] < right[j])
		{
			a[k] = left[i];
			++i;
		}
		else
		{
			a[k] = right[j];
			++j;
		}
	}
}

void mergeSort(int *a, int st, int end)
{
	int mid;

	if(st < end)
	{
		mid = (st+end)/2;

		mergeSort(a, st, mid);
		mergeSort(a, mid+1, end);

		merge(a, st, mid, end);
	}
}

int main()
{
	int arr[size];
	int i;

	for(i = 0; i < size; ++i)
		std::cin >> arr[i];

	mergeSort(arr, 0, size-1);

	for(i = 0; i < size; ++i)
		std::cout << arr[i] << " ";

	std::cout << std::endl;

	return 0;
}
