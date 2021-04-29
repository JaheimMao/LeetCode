// 0403_Frog Jump
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int stonesSize = stones.size();
        vector<vector<int>> dp(stonesSize, vector<int>(stonesSize));
        dp[0][0] = true;
        for(int i=1; i<stonesSize; i++)
            if(stones[i]-stones[i-1] > i){
                cout<<"\ni = "<<i<<endl;
                return false;
            }
        
        for(int i=1; i<stonesSize; i++)
            for(int j=i-1;j>=0; j--){
                int k = stones[i]-stones[j];
                if(k>j+1)
                    break;
                dp[i][k] = dp[j][k+1] || dp[j][k] || dp[j][k-1];
                cout<<"i = "<<i<<", j = "<<j<<", k = "<<k<<endl;
                if(i == stonesSize-1 && dp[i][k])
                    return true;
            }
        return false;
    }
};

int main(void){
    Solution test;
    vector<int> stones = {0,1,3,6,10,15,21,28};
    cout<<"\nThe result is "<<test.canCross(stones)<<endl;
    return 0;
}