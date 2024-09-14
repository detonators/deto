#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    // hashmap storing elements in the array as 
    // key and their occurrences as value.
    unordered_map<int,int> hashMap;

    for(auto i:nums) ++hashMap[i];
    // if the count of elements equals to 1, it is a non-repeating element.
    for(auto pairInMap:hashMap) 
        if(pairInMap.second == 1) cout<<pairInMap.first<<" ";
}

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}
/*
Output:

Non-repeating numbers are:
3 -1 2

Time Complexity: O(N)

Reason: Iterating once through the array once.

Space Complexity: O(N)

Reason: Map is used to insert elements.
*/