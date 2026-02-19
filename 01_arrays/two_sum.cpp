#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(target == nums[i]+nums[j]){
                    return {i,j};
                }
            }
        }

        return {0};
    }
};

int main() {
    Solution sol;
    int n, target;
    
    cout<<"No. of elements: ";
    cin>>n;
    vector<int> nums(n);

    cout<<"Enter values : ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    cout<<"Target to find : ";
    cin>>target;

    vector<int> result = sol.twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}