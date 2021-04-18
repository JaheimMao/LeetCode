// 0213_House Robber II
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int numssize = nums.size();
        vector<vector<int>> sum(2, vector<int>(numssize, 0));

        if(!numssize)
            return 0;
        else if(numssize == 1)
            return nums[0];
        else if(numssize == 2)
            return max(nums[0], nums[1]);
        else{
            for(int i=0; i<2; i++){
                sum[i][i] = nums[i];
                sum[i][i+1] = max(nums[i+1],nums[i]);
            }
            for(int i=0; i<2; i++)
                for(int j=i+2; j<numssize-1+i; j++)
                    sum[i][j] = max(sum[i][j-1], sum[i][j-2]+nums[j]);
        }
        return max(sum[0][numssize-2], sum[1][numssize-1]);
    }
};

int main(void){
    Solution test;
    vector<int> nums = {200,3,140,20,10};
    cout<<"The maximum amount of money is "<<test.rob(nums)<<endl;
    return 0;
}
