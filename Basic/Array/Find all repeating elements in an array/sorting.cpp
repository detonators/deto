/*
Sorting

Approach:

The process is as follows:-

Sort the given array.
Start iterating in the sorted array.
If the current element and the next element are the same, return the repeating element.
*/

#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    
    cout<<"The repeating elements are: ";
    for(int i=0;i<arr.size()-1;i++) 
        if(arr[i] == arr[i+1]) cout<<arr[i]<<" ";
}

int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    return 0;
}

/*
Output:

The repeating elements are: 1 2 4

Time Complexity: O(NlogN)+O(N)

Reason: O(NlogN) for sorting. O(N) for iterating again in the array for finding a loop.

Space Complexity: O(1)
*/