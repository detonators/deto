#include <iostream>
using namespace std;

bool isSubset(int arr1[], int m, int arr2[], int n){
    if(m>n) return false;
    for(int i=0; i<m; i++){
	    bool present=false;
	    for(int j=0; j<n;j++){
	        if(arr2[j]==arr1[i]){
	            present = true;
	            break;
	        }
	    }
	    if(present==false) return false;
	}
	return true;
}


int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}
/*
Output:

arr1[] is a subset of arr2[]

Time Complexity: O(M*N)

Reason: The outer loop runs for M times and for every iteration inner loop runs N times.

Space Complexity: O(1)
*/