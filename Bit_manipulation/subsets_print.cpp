#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subset_ct = 1<<n;
    vector<vector<int>> all_subsets;
    for (int mask=0; mask<n; mask++) {
        vector<int> subset;
        for (int i=0; i<n; i++) {
            if((mask & (1<<i))!=0) {
                subset.push_back(nums[i]);
            }
        }
        all_subsets.push_back(subset);
    }
    return all_subsets;
}

int main(){
    vector<int> n;
    cin >> n;
    vector<int> v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    auto all_subsets = subsets(v);
    for(subset:all_subsets) {
        for(ele:subset) {
            cout << ele << " ";
        }
        cout << endl;
    }
    
    return 0;
}