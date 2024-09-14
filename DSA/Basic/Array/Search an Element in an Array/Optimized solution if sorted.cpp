#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
	int low = 0, high = n - 1;
	int ans = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > k) {
			high = mid - 1;
		}
		else if (arr[mid] < k) {
			low = mid + 1;
		}
		else {
			ans = mid;
			break;
		}
	}
	cout << "The element is present in "<<ans<<" index";
}

/*
Output: The element is present in 5 index

Time Complexity: O(logn).

Space Complexity: O(1)
*/