#include<bits/stdc++.h>
using namespace std;

int mountainSearch(int arr[], int n){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]>arr[s])
            s = mid+1;
        else if(arr[mid]>arr[e])
            e = mid;

        else return e;

        mid = s+(e-s)/2;
    }
    
}

int main()
{
    int arr[] = {1, 2, 4, 5, 14, 11, 9, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum value is at index\t"<<mountainSearch(arr, n)<<"\n";
}