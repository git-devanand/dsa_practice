#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0) {
                candidate = nums[i];
            }
            if (candidate == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution ob;
    cout<<ob.majorityElement(nums)<<"\n";
}