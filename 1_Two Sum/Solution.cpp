// 1.Two Sum
// 
#include<iostream>
#include<vector>

using namespace std;


/*******暴力解法，用两层循环遍历求和**************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
            for(int j = i+1; j < nums.size(); j++)
                if((nums[i] + nums[j]) == target)
                    return {i,j};
        return {0};
    }
};
/***********************************************/

int main(void){
    
    return 0;
}