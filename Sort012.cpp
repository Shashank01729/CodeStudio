#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int lo = 0;
	int hi = n - 1;
	int mid = 0;

	while (mid <= hi) {
		switch (arr[mid]) {

		// If the element is 0
		case 0:
			swap(arr[lo++], arr[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(arr[mid], arr[hi--]);
			break;
		}
	}
}
