#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] ==0 && nums[j] != 0){
                    nums[i] = nums[j];
                    nums[j] = 0;
                    continue;
                }
            }
        }
    }
};

int main(){

    Solution sol;
    //or auto sol = Solution();
    int n;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    cout<<"Enter the  elements : ";
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    sol.moveZeroes(v);

    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<v[i];
        if(i < n-1){
            cout<<", ";
        }
    }
    cout<<"]";

    return 0;
}
