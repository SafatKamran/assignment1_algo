#include <iostream>

#define size 10

void insertion(int *a)
{
	int key, i;

	for(int j = 1; j < size; ++j)
	{
		key = a[j];
		i = j - 1;

		while(i >= 0 && a[i] > key)
		{
			a[i+1] = a[i];

			i = i - 1;
	    }

	    a[i+1] = key;
	}
}

int main()
{
	int arr[size];

	for(int i = 0; i < 10; ++i)
		std::cin >> arr[i];

	insertion(arr);

	for(int i = 0; i < 10; ++i)
		std::cout << arr[i] << " ";

	std::cout << std::endl;

	return 0;
}
