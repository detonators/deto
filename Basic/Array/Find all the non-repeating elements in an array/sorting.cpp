#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());//sorting array
    
    //handling first element of the array.
    if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
    for(int i=1;i<nums.size()-1;i++) 
       if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
    //handling last element of the array
    if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];
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
-1 2 3

Time Complexity: O(NlogN)+O(N)

Reason: O(NlogN) for sorting the array. O(N) for iteration.

Space Complexity: O(1)

Reason: No extra data structure was used.
*/