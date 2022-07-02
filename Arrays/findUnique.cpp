#include <iostream>
using namespace std;

void takeArray(int arr[], int n){
    for (int i=0; i<n; i++) cin >> arr[i];
}

// void printArray(int arr[], int n){
//     for (int i=0; i<n; i++) cout << arr[i] <<"  ";
// }

int findUnique(int *arr, int n){
    int ans = 0;
    for (int i=0; i<n; i++){
        ans = ans ^ arr[i];  // ans XOR arr[i]
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int size;
        cin >> size;
        int arr[1000];
        takeArray(arr, size);
        cout << findUnique(arr, size) << "\n";
    }
    return 0;
}