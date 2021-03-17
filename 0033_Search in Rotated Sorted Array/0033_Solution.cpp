//33.Search in Rotated Sorted Array
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int m = 0, n = len-1, mid = 0;
        if(target >= nums[0]){
            if(target == nums[0])
                return 0;
            while(m<=n){
                mid = (m+n)/2;
                if(nums[mid]>target){
                    n = mid-1;
                }
                else if(nums[mid]<target){
                    if(nums[mid]>=nums[0])
                        m = mid+1;
                    else
                        n = mid-1;
                }
                else
                    return mid;
            }
        }
        if(target <= nums[len-1]){
            if(target == nums[len-1])
                return len-1;
            while(m<=n){
                mid = (m+n)/2;
                if(nums[mid]<target){
                    m = mid+1;
                }
                else if(nums[mid]>target){
                    if(nums[mid]>=nums[0])
                        m = mid+1;
                    else
                        n = mid-1;
                }
                else
                    return mid;
            }
        }
        return -1;
    }
};

int main(void)
{
    vector<int> nums;
    int target = 0;
    Solution test;

    nums = {5,1,2,3,4};
    target = 1;

    cout << test.search(nums, target)<<endl;
}