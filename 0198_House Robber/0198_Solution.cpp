// 0198_House Robber
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int numssize = nums.size();
        vector<int> sum(numssize, 0);
        if(!numssize)
            return 0;
        else if(numssize == 1)
            return nums[0];
        else{
            sum[0] = nums[0];
            sum[1] = max(nums[0], nums[1]);
            for(int i= 2; i<numssize; i++)
                sum[i] = max(sum[i-2]+nums[i], sum[i-1]);
        }
        return sum[numssize-1];
    }
};

int main(void){
    Solution test;
    vector<int> nums = {1,2,3,1};
    cout<<"The maximum amount of money is "<<test.rob(nums)<<endl;
    return 0;
}