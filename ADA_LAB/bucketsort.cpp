#include <iostream>
using namespace std;

void bucketSort(int arr[], int n)
{
	int i, j, k, min;
	int count[10];

	for (i = 0; i < 10; i++)
		count[i] = 0;

	for (i = 0; i < n; i++)
		count[arr[i]]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
		k = arr[i];
		min = count[k];
		count[k]--;
		for (j = i; j >= 0; j--)
		{
			if (count[arr[j]] > min)
			{
				arr[j + 1] = arr[j];
				count[arr[j]]++;
			}
			else
				break;
		}
		arr[j + 1] = k;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bucketSort(arr, n);
	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}