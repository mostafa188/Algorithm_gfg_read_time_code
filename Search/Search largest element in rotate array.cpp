#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int low, int high)
{
	if (high == low)
		return arr[low];

	int mid = low + (high - low) / 2;
  
	if(mid==0 && arr[mid]>arr[mid+1])
	{
			return arr[mid];
	}
	if (mid < high && arr[mid + 1] < arr[mid] && mid>0 && arr[mid]>arr[mid-1]) {
		return arr[mid];
	}


	if (arr[low] > arr[mid]) {
		return findMax(arr, low, mid - 1);
	}
	else {
		return findMax(arr, mid + 1, high);
	}
}
int main()
{
	int arr[] = { 6,5,4,3,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findMax(arr, 0, n - 1);

	return 0;
}
