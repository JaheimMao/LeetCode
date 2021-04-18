// 0219_Contains Duplicate II
#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> s;
        int count = 0;
        for(int i : nums){
            if(s.find(i) != s.end())
                return true;
            else
                s.insert(i);
            if(s.size()>k)
                s.erase(nums[count-k]);
            count++;
        }
        return false;
    }
};

int main(void){
    Solution test;
    vector<int> nums ={1,2,3,1,2,3};
    int k = 2;
    cout<<"The result is "<<test.containsNearbyDuplicate(nums, k)<<endl;
}