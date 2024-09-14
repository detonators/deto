/*
Maps

Approach:

The process is as follows:-

Store the elements in the hashmap with its frequency of occurrence.
Iterate through the hashmap. If occurrence is more than 1, return the element.
*/
#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    unordered_map<int,int> elementCount;
    for(auto i:arr) ++elementCount[i];
    
    cout<<"The repeating elements are: ";
    for(auto i:elementCount) {
        if(i.second > 1) cout<<i.first<<" ";
    }
}

int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    
    return 0;
}
/*
Output:

The repeating elements are: 4 1 2

Time Complexity: O(N)

Reason: Entire array is traversed to insert them in the map.

Space Complexity: O(N)

Reason: Map is used to store the count of each element.
*/