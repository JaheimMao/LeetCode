// 0137_Single Number II
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<32; i++){
            int total = 0;
            for (int num : nums)
                total += ((num >> i) & 1);
            if(total%3)
                ans |= (1<<i);
        }
        return ans;
    }
};

int main(void){
    Solution test;
    vector<int> nums = {30000,500,100,30000,100,30000,100};
    cout<<"\nThe number which appears exactly once is "<<test.singleNumber(nums)<<endl;
    return 0;
}