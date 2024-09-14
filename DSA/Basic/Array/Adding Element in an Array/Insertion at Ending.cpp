#include <bits/stdc++.h>
using namespace std;
void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatEnd(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Output:

Before inserting the value at beginning:
10 9 14 8 20 48 16 9
After inserting the value at beginning:
10 9 14 8 20 48 16 9 40

Time Complexity: θ(n), since n iterations are required to shiftθ(1) since we need to directly add an element at the end of the array

Space Complexity: O(1)

*/
