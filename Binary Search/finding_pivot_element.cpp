#include<bits/stdc++.h>

using namespace std;

int pivot(int arr[], int n){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[s])
            s = mid + 1;
        else if (arr[mid]<arr[e]) 
            e = mid;

        else return mid;
        mid = s+(e-s)/2;
    }
    return e;
}

int main()
{
    int arr[] = {7,9,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Pivot index:\t"<<pivot(arr, n)<<"\n";
}