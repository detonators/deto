#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int result = nums[0];
    for(int i=0;i<nums.size()-1;i++) {
        int p = nums[i];
        for(int j=i+1;j<nums.size();j++) {
           result = max(result,p);
           p *= nums[j];
        }
        result = max(result,p);//manages (n-1)th term 
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

/*
Output: The maximum product subarray: 20

Complexity Analysis
Time Complexity: O(N2)

Reason: We are using two nested loops

Space Complexity: O(1)

Reason: No extra data structures are used for computation
*/