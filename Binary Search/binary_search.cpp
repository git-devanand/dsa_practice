#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]<k)
            s = mid + 1;
        else
            e = mid - 1;

        mid = s+(e-s)/2;
    }
    
}

int main()
{
    int arr[] = {1, 2, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    cout<<key<<" is at index\t"<<binarySearch(arr, n, key)<<"\n";
}