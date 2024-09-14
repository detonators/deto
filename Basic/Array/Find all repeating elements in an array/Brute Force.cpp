#include<bits/stdc++.h>
using namespace std;
	 void findRepeatingElements(int arr[],int n) {
	    int cnt = 0;
	    int dup[n] ;
	    for(int i=0;i<n-1;i++) {
	        for(int j=i+1;j<n;j++) {
	            if(arr[i]==arr[j]) dup[cnt++] = arr[i];
	        }
	    }
	    cout<<"The repeating elements are: ";
	    for(int i=0;i<cnt;i++) 
	        if(dup[i] != dup[i+1]) cout<<dup[i]<<" ";
	}
	int main() {
		int arr[] = {1,1,2,3,4,4,5,2};
		findRepeatingElements(arr,8);
	}
/*
Output:

The repeating elements are: 1 2 4

Time Complexity: O(N2)+O(N)

Reason: We are taking one element and searching its repeating element again in the array. Also, iterating through the dup array which contains repeating elements to find unique repeating elements.

Space Complexity: O(N)
*/