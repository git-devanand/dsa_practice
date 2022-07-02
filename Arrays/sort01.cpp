#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void sortOne(int arr[], int size){
    int left=0, right=size-1;
    while(left<right){
        while(arr[left]==0) left++;
        while(arr[right]==1) right--;

        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}

int main()
{
    int arr[5] = {1,0,1,0,0};
    int n = sizeof(arr)/sizeof(int);
    sortOne(arr,n);
    printArray(arr, n);
    return 0;
}