#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    bool chk;
    for(int i=0;i<nums.size();i++) {
        chk = false;
        for(int j=0;j<nums.size();j++) {
            if(i!=j && nums[i] == nums[j]) {
                chk = true;//to check if for current picked elements is repeating element
                break;
            }
        }
        //since chk is false only when no repeating element has occurred while traversal and reached the end of the array.
        if(!chk) cout<<nums[i]<<" ";
    }
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
2 -1 3

Time Complexity: O(N2)

Reason: We are using two loops nested.

Space Complexity: O(1)

Reason: No extra data structure is used for computation.
*/