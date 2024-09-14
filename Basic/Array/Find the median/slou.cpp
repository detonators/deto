#include<bits/stdc++.h>
using namespace std;
void getMedian(int arr[],int n)
{
    sort(arr,arr+n);
    if(n%2==0)
    {
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else
    {
        cout<<arr[(n/2)];
    }
}
int main()
{
    int arr[] = {4,7,1,2,5,6};
    int n = 6;
    cout<<"The median of the array is: ";
    getMedian(arr,n);
    return 0;
}

/*
Output:

The median of the array is: 4.5

Time Complexity: O(N*log N), Sorting of array

Space Complexity: O(1)
*/
