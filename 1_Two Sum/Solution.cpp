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

/*************使用哈希表提高查找速率**************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Hash;
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];            
            auto it = Hash.find(temp);
            if(it != Hash.end())
                return {it->second,i};
            Hash[nums[i]] = i;
        }
        return {0};
    }
};
/*********************************************/

int main(void){
    
    return 0;
}