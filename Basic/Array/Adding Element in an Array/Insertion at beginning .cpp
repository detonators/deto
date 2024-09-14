#include <bits/stdc++.h>
using namespace std;
void insertatbegin(int* arr,int n,int value)
{
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
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
    insertatbegin(arr,n,value);
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
40 10 9 14 8 20 48 16 9

Time Complexity: θ(n), since n iterations are required to shift the array element to right by 1 position

Space Complexity: O(1)

*/
