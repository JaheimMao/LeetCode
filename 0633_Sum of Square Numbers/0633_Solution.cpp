// 0633_Sum of Square Numbers
#include<iostream>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int base = 2; base * base <= c; base++) {
            if (c % base != 0)
                continue;
            int exp = 0;
            while (c % base == 0) {
                c /= base;
                exp++;
            }
            if (base % 4 == 3 && exp % 2 != 0)
                return false;
        }
        return c % 4 != 3;
    }
};

int main(void){
    Solution test;
    int num = 5;
    cout<<"the result is "<<test.judgeSquareSum(num)<<endl;
    return 0;
}