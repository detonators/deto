#include<bits/stdc++.h>
using namespace std;
int main() {

	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	int initialSum = 0;
	cout <<"The sum of the elements of the array is ";
	cout<<accumulate(arr, arr + n, initialSum);

}

/*
Approach:

For C++: “accumulate” is used to calculate the sum of all the elements in the array.    

For Java: Instream sum() gives the sum of all the elements in the stream.

The sum of the elements of the array is 15

Time Complexity: O(n).

Space Complexity: O(1).

*/