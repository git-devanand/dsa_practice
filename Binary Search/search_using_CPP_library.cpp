#include<bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int k){
    auto idx = lower_bound(arr, arr+n, k)-arr;
    if(idx<n && arr[idx]==k)
        return idx;
    else    
        return -1;
}

int main()
{
    int arr[] = {1,3,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 11;
    cout<<key<<" is at index\t"<<search(arr, n, key)<<"\n";
}