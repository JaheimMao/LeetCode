// 0217_Contains Duplicate
#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i:nums){
            if(s.find(i) != s.end())
                return true;
            else s.insert(i);
        }
        return false;
    }
};

int main(void){
    Solution test;
    vector<int> nums ={1,2,3,1};
    cout<<"The result is "<<test.containsDuplicate(nums)<<endl;
}