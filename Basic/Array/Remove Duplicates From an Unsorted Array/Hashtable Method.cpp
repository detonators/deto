/* Intuition: 

-> We can use Hashtable ( map in C++, HashMap in Java) to check duplicate elements of the array. 

-> In Hashtable, insertion and searching in O(1) average.

Approach:

-> We will create a hash table of size n and store elements in it. Before inserting a new element in the hash table, if it already exists in the hash table.

-> If the current element is not present we will print it else will move on. */

#include <bits/stdc++.h>
using namespace std ;

class removeDuplicate {

public:

    void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }

} ;
int main() {

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
    int n = 9  ;

    removeDuplicate d1  ;
    d1.duplicate(arr, n) ;

    return 0 ;
}
/*
Output: 4 3 9 2 1 10 89 34

Time Complexity: O(n) + O(n) = O(n)

Reason:Iteration in array , searching hash table

Space Complexity : O(n) 
*/
