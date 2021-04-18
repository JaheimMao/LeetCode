// 0026_Remove Duplicates from Sorted Array
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        vector <int>::iterator Iter;
        if(!nums.size())
            return 0;
        for ( Iter = nums.begin(); Iter != nums.end()-1; ){
            if(*(Iter) == *(Iter+1))
                nums.erase(Iter);
            else Iter++;
        }
        return nums.size();
    }
};

int main(void){
    Solution test;
    vector<int> nums = {1,1,2};
    cout<<"nums.size()="<<test.removeDuplicates(nums)<<endl;
    return 0;
}