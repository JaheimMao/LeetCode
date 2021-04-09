// 0154_Find Minimum in Rotated Sorted Array II

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int numssize = nums.size();
        int i = 0;
        while(i<numssize){
            if(nums[i]<nums[0])
                return nums[i];
            i++;
        }
        return nums[0];
    }
};

int main(void){
    Solution test;
    vector<int> nums = {1,3,5};
    cout<<"The minimum number is "<<test.findMin(nums);
    return 0;
}