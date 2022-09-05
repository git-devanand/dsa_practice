#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> powerSet(vector<int> arr, int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int s=0; s<(1<<n); s++){
            
        }
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Power set:\t"<<powerSet(arr, n)<<"\n";
}