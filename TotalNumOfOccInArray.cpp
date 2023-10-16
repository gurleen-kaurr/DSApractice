//Program : Find Total Number Of Occurences Of Occurence Of an ELement In An Array.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r < l)
		return -1;

	int mid = l + (r - l) / 2;

	if (arr[mid] == x)
		return mid;

	if (arr[mid] > x)
		return binarySearch(arr, l, mid - 1, x);

	return binarySearch(arr, mid + 1, r, x);
}

int countOccurrences(int arr[], int n, int x)
{
	int ind = binarySearch(arr, 0, n - 1, x);

	if (ind == -1)
		return 0;

	int count = 1;
	int left = ind - 1;
	while (left >= 0 && arr[left] == x)
		count++, left--;

	int right = ind + 1;
	while (right < n && arr[right] == x)
		count++, right++;

	return count;
}

int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 2,2,2,2,3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 2;
	cout <<"Total Number Of Occurences are "<< countOccurrences(arr, n, x);
	return 0;
}
