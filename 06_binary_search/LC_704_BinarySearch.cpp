#include <iostream>
#include <vector>
using namespace std;


// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int mid = nums.size()/2;
//         int left = 0;
//         int right = nums.size()-1;
//         int res = 1;

//         while(res){

//             if(nums[mid] == target){
//                 return mid;
//             }
//             else if((mid == left) or (mid == right)){
//                 res = 0;
//             }
//             else if(target < nums[mid]){
//                 right = mid;
//                 mid = (left+right)/2;
//             }
//             else if(target > nums[mid]){
//                 left = mid;
//                 mid = (left+right)/2;
//             }
//         }

//         return -1;
//     }
// };


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = nums.size()/2;
        int left = 0;
        int right = nums.size()-1;
        int res = 1;

        while(res){

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[left] == target){
                return left;
            }
            else if(nums[right] == target){
                return right;
            }
            else if((mid == left) or (mid == right)){
                res = 0;
            }
            else if(target < nums[mid]){
                right = mid;
                mid = (left+right)/2;
            }
            else if(target > nums[mid]){
                left = mid;
                mid = (left+right)/2;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {1, 3};
    int target;

    cout << "Enter target: ";
    cin >> target;


    Solution sol;
    int result = sol.search(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found. Output: "<< result << endl;

    return 0;
}
