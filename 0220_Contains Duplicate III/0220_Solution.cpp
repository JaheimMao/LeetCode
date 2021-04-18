// 0220_Contains Duplicate III
#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> s;
        int count = 0;
        for(int i : nums){
            s.insert(i);
            if(s.find(i))
            if(s.size()>k)
                s.erase(nums[count-k]);
            count++;
        }
        return false;
    }
};

int main(void){
    Solution test;
    int k=3, t=3;
    vector<int> nums ={2147483646,2147483647};
    cout<<"The result is "<<test.containsNearbyAlmostDuplicate(nums, k, t)<<endl;
    return 0;
}