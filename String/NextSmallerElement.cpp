#include "bits/stdc++.h"
using namespace std;

void NextSmallerNum(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++)
	{
		next = -1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- "
			<< next << endl;
	}
}

// Driver Code
int main()
{
	int arr[]= {11, 13, 21, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	NextSmallerNum(arr, n);
	return 0;
}


