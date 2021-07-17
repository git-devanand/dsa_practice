#include<bits/stdc++.h>

using namespace std;

// bubble sort algorithm
void bubbleSort(vector <int> &arr){
    int n=arr.size();
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-1; ++j){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arrSize;
    cin >> arrSize;
    vector <int> arr(arrSize);
    for(int i=0; i<arrSize; ++i)
    cin >> arr[i];
    bubbleSort(arr);
    for(int i=0; i<arrSize; i++)
    cout << arr[i] << " ";

    return 0;
}