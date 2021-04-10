// 0263_Ugly Number

#include<iostream>

using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        int temp = n;
        if(temp==0)
            return false;
        while(temp%2 == 0)
            temp /= 2;
        while(temp%3 == 0)
            temp /= 3;
        while(temp%5 == 0)
            temp /= 5;
        if(temp==1)
            return true;
        return false;
    }
};

int main(void){
    Solution test;
    int n = 6;
    cout<<test.isUgly(n)<<endl;
    return 0;
}