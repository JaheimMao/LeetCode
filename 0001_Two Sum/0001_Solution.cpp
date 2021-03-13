// 1.Two Sum
// 
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


/*******暴力解法，用两层循环遍历求和**************
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
***********************************************/


/*************使用哈希表提高查找速率**************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Hash;
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i]; //获取目标值和当前读取值之间的差
            auto it = Hash.find(temp); //判断差值是否在Hash表中
            if(it != Hash.end())
                return {it->second,i};
            Hash[nums[i]] = i; //将当前值存入Hash表
        }
        return {0};
    }
};
/*********************************************/

int main(void){
    Solution test;
    vector<int> nums;
    vector<int> result;
    int target;
    int temp;

    nums = {3,6,7};
    target = 13;

    result = test.twoSum(nums, target);
    for(int i=0; i<result.size(); i++)
        cout << result[i]; 
    
    return 0;
}