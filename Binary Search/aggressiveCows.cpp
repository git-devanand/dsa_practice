#include<bits/stdc++.h>
using namespace std;


bool isPossibleSol(vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i=0; i<stalls.size(); i++){
        if (abs(stalls[i] - lastPos) >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for (int i=0; i<stalls.size(); i++) {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e) {
        if (isPossibleSol(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else e = mid -1;
        mid = s + (e-s)/2;
    }
    return ans;
}