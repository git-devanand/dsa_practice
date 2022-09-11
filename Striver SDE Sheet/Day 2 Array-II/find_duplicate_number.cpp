#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {

    while(nums[0]!=nums[nums[0]])
        swap(nums[0], nums[nums[0]]);
    return nums[0];
    }

int main()
{
    vector<int> nums = {3,1,3,4,2};
    findDuplicate(nums);
    for(int i=0; i<nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<"\n";

}