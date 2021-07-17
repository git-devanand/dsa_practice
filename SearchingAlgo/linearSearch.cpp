#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int s){
    int i;
    for (i=0; i<n; i++)
        if (arr[i]==s)
            return i;
    return -1;

}

int main(){
    int arr[] = {2,3,4,8,10,32,48,64};
    int s = 32;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, s);
    (result == -1)
        ? cout <<"Element is NOT FOUND !"
        : cout <<"Element "<<s<<" is present at index "<< result;

    return 0;

}