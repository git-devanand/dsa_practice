#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
	for (int i=0; i<arr.size(); i++) ans = ans ^ arr[i];
	for (int i=0; i<arr.size(); i++) ans = ans ^ i;
	return ans;
}


int main() 
{
    int t;
    cin >> t;
    for (int i=1; i<=t; i++){
        int size;
        cin>>size;
        vector<int> arr;
        for (int i=0; i<size; i++) arr.push_back(i);
        cout << findDuplicate(arr)<< "\n";
    }
    return 0;
}