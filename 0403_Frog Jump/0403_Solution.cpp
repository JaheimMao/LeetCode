// 0403_Frog Jump
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool dfs(vector<vector<int>> dp, int i, int k){
        if(i == 0){
            k = 0;
            dp[i][k] = true;
            return true;
        }
        else if(i == 1){
            k = 1;
            dp[i][k] =true;
            return true;
        }
        else if(!dp[i-k-1][k+1] && !dp[i-k][k] && !dp[i-k+1][k-1])
            return false;
        else {
        }
    }
    bool canCross(vector<int>& stones) {

    }
};

int main(void){
    return 0;
}