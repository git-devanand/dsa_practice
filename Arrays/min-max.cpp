#include<bits/stdc++.h>
using namespace std;

int binarySort(int arr[], int n, int x){
    int l = 0, r = n-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

int getMin(int arr[], int n){
    binarySort(arr, n, arr[0]);
    int min = arr[n/2];
    if (min == -1) return arr[n/2];
    if (min < arr[n/2+1]){
        for (int i=0; i<n/2; i++){
            if (arr[i] < min) min = arr[i];
        }
    }
    
    return min;
}

int getMin(int arr[], int n){
    binarySort(arr, n, arr[0]);
    int max = arr[n/2];
    if (max == -1) return arr[n/2];
    else 
        for (int i=n/2+1; i<n; i++){
            if (arr[i] < max) max = arr[i];
        }
    return max;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Min: "<<getMin(arr, n)<<endl;
    cout << "Max: "<<getMax(arr, n)<<endl;
    return 0;
}