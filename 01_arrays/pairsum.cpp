#include<iostream>
#include<vector>
using namespace std;

vector<int> brutepairsum(vector<int> nums, int target){//O(n^2)
    vector<int> ans;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

vector<int> besttwopointerpairsum(vector<int> nums, int target){ //O(n)
    vector<int> ans;
    int left = 0;
    int right = nums.size()-1;

    for(int i=0; i<nums.size(); i++)
    {
        if((nums[left]+nums[right])>target)
        {
            right--;
        }
        else if((nums[left]+nums[right])<target)
        {
            left++;
            continue;
        }
        else if ((nums[left]+nums[right])==target){
            ans.push_back(left);
            ans.push_back(right);
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> brute = brutepairsum(nums, target);
    vector<int> best = besttwopointerpairsum(nums, target);
    cout<<"["<<brute[0]<<", "<<brute[1]<<"]"<<endl;
    cout<<"["<<best[0]<<", "<<best[1]<<"]"<<endl;
    return 0;
}
