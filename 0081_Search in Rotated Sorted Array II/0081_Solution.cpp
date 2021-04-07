// 0081_Search in Rotated Sorted Array II
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int numssize=nums.size();
        int i = 0;
        while(i<=numssize-1){
            if(nums[i]==target)
                return true;
            i++;
        }
        return false;
    }
};

int main(void){
    int target = 0;
    vector<int> nums = {2,5,6,0,0,1,2};
    Solution test;
    cout<<"The result is "<<test.search(nums,target)<<endl;
    return 0;
}