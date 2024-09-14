#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i];
	}
	double average = sum / n;
	cout << "The average is "<<average;

}

/*
Output:

The average is 3

Time Complexity: O(n) As we are traversing the array once.

Space Complexity: O(1).
*/
