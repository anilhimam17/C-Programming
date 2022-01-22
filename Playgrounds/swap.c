#include <stdio.h>

int *bubble_sort(int arr[], int len);

int main(int argc, char const *argv[])
{
	int len = 0;
	puts("Enter the length of the array");
	scanf("%i", &len);

	// Creating the array
	int arr[len];
	for (int i = 0; i < len; i++)
	{
		puts("Enter the list element: ");
		scanf("%i", &arr[i]);
	}

	// Sorting the array
	int *sortedArray = bubble_sort(arr, len);

	// Printing the array
	for (int i = 0; i < len; i++)
	{
		printf("%i\n", sortedArray[i]);
	}
	return 0;
}

int *bubble_sort(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// Swapping
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
	return arr;
}