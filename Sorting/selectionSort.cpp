#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min = arr[i];
        int index = i;
        for (int j = i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main(){
    int n;
    int arr[n];
    cin >> n;
    for (int i=0; i<n; i++)
    cin >> arr[i];
    selectionSort(arr, n);

    return 0;

}