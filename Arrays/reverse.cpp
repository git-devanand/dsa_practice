#include<bits/stdc++.h>

using namespace std;

void reverseArr_iterative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void reverseArr_recursive(int arr[], int n){
    if(n<=1) return;
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    reverseArr_recursive(arr+1, n-2);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    cout << arr<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Reversed array is : "<<endl;

    reverseArr_recursive(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    } 
    return 0;

}