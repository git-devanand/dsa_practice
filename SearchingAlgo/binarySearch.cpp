#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int k){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k) return mid;
        else if (arr[mid]<k) s=mid+1;
        else e=mid-1;
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[5]={2,3,5,7,11};
    int idx = binarySearch(arr, 5, 7);
    cout << idx <<endl;
    return 0;
}