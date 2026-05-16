#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = nums[0], max_sum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            cs = max(nums[i], cs + nums[i]);
            max_sum = max(cs, max_sum);
        }

        return max_sum;
    }   
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    int ans = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << ans << endl;

    return 0;
}