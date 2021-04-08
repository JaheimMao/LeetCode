// 0153_Find Minimum in Rotated Sorted Array
/* 
 *关于代码其中还有一个疑惑，mid的值为什么一定要和high进行比较，
 * 和high比较无法得到正确答案。
**/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int numssize = nums.size();
        int high = numssize-1, low = 0;
        int mid = 0;
        while(low<=high){
            mid = (high+low)/2;
            if(nums[mid]<nums[high])
                high = mid;
            else
                low = mid+1;
        }
        return nums[mid];
    }
};

int main(void){
    Solution test;
    vector<int> nums = {11,13,15,17};
    cout<<"The minimum is "<<test.findMin(nums);
}