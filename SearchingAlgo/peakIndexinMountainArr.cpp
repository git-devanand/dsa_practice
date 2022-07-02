#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr){
        int n = arr.size();
        int s=0, e=n-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]) s=mid+1;
            else e=mid;
        
            mid = s+(e-s)/2;
        }
        return s; 
}

int main()
{
    vector<int> arr = {0,2,1,0};
    cout << "Peak index of arr is "<<peakIndexInMountainArray(arr);
    return 0;
}