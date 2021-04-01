// 1006_Clumsy Factorial
// 根据题意进行推导，找到规律
#include<iostream>
using namespace std;
class Solution {
public:
    int clumsy(int N) {
        if (N == 1) {
            return 1;
        } else if (N == 2) {
            return 2;
        } else if (N == 3) {
            return 6;
        } else if (N == 4) {
            return 7;
        }

        if (N % 4 == 0) {
            return N + 1;
        } else if (N % 4 <= 2) {
            return N + 2;
        } else {
            return N - 1;
        }
    }
};

int main(void){
    Solution test;
    int N = 10;
    cout<<"结果为："<<test.clumsy(N)<<endl;
    return 0;
}