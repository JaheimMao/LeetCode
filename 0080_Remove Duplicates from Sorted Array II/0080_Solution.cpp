// 0080_Remove Duplicates from Sorted Array II
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=2, fast=2;
        int numsize = nums.size();
        if(numsize<=2)
            return numsize;

        while(fast<numsize){
            if(nums[slow-2]!=nums[fast]){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};

int main(void){
    return 0;
}