#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums){
            ans ^= val;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,5,1,2,3,3,5,7};
    cout<<sol.singleNumber(nums)<<endl;
    return 0;
}