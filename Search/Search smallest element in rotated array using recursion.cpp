#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int low, int high)
{
	if (high < low)
		return arr[0];
  
	if (high == low)
		return arr[low];

	// Find mid
	int mid = low + (high - low) / 2; /*(low + high)/2;*/

	// Check if element (mid+1) is minimum element. Consider
	// the cases like {3, 4, 5, 1, 2}
	if (mid < high && arr[mid + 1] < arr[mid])
		return arr[mid + 1];

	// Check if mid itself is minimum element
	if (mid > low && arr[mid] < arr[mid - 1])
		return arr[mid];

	// Decide whether we need to go to left half or right
	// half
	if (arr[high] > arr[mid])
		return findMin(arr, low, mid - 1);
	return findMin(arr, mid + 1, high);
}

// Driver program to test above functions
int main()
{
	int arr[] = { 5, 6, 1, 2, 3, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "The minimum element is "
		<< findMin(arr, 0, N - 1) << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
