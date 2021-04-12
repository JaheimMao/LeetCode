// 0179_Largest Number
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
private:
    static bool compare(int a, int b){
        string sa = to_string(a)+to_string(b);
        string sb = to_string(b)+to_string(a);
        return sa>sb;
    }
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        if(nums[0] == 0)
            return "0";
        string result;
        for(int &num : nums)
            result += to_string(num);
        return result;
    }
};
int main(void){
    Solution test;
    vector<int> nums{10,2};
    cout<<"The largest number is "<<test.largestNumber(nums)<<endl;
    return 0;
}
