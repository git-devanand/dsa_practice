#include<bits/stdc++.h>

using namespace std;

pair<int, int> firstLastOccur(vector<int>& arr, int k){
    int n = arr.size();
    int firstOccur = -1;
    int lastOccur = -1;
    int s=0; e<n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            firstOccur = mid;
            lastOccur = mid;
            while(mid<=e){
                
            }
        }
        else if(arr[mid]<k) s = mid+1;
        else e=mid-1;
        mid = s+(e-s)/2;
    }
}

int main()
{
    vector<int> arr = {0,1,1,1,1,2,2,3};
    int k = 1;
    pair<int, int> firstLast = firstLastOccur(arr, k);
    cout<<"First occurances of "<<k<<" at index "<<firstLast.first<<"\n";
    cout<<"Last occurances of "<<k<<" at index "<<firstLast.second<<"\n";
}