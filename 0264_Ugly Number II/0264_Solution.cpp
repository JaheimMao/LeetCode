// 0264_Ugly Number II
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0, cout =1;
        vector<long> un;
        if(n<=0)
            return false;
        un.push_back(1);
        while(i<n){
            un.push_back(2*un[i]);
            un.push_back(3*un[i]);
            un.push_back(4*un[i]);
            un.push_back(5*un[i]);
            i++;
            sort(un.begin(),un.end());
            un.erase(unique(un.begin(), un.end()), un.end());
        }
        return un[n-1];
    }
};

int main(void){
    Solution test;
    int n = 1000;
    cout<<test.nthUglyNumber(n)<<endl;
    return 0;
}