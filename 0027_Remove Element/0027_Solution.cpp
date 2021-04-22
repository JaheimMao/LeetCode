// 0027_Remove Element
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int>::iterator Iter;
        if(!nums.size())
            return 0;
        for(Iter=nums.begin();;){
            if(*Iter == val)
                nums.erase(Iter);
            else Iter++;
            if(Iter == nums.end())
                break;
        }
        return nums.size();
    }
};

int main(void){
    Solution test;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout<<"nums.size()="<<test.removeElement(nums, val)<<endl;
    return 0;
}