#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	vector<int>arr = {1, 2, 3, 4, 5};
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i];
	}
	cout <<"The sum of the elements of the array is "<< sum;
}
/*Output:

The sum of the elements of the array is 15

Time Complexity: O(n) As we traverse the array once.

Space Complexity: O(1).


Approach: 

Using for loop traverse through the array and while traversing  maintain  a variable for storing sum of the elements in the array.
After completing the traversal simply print the sum.

*/