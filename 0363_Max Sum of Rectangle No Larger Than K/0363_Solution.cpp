// 0363_Max Sum of Rectangle No Larger Than K
// 超时
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sumLine(vector<int> nums, int start, int end){
        int sum = 0;
        
        for(int i=start; i<=end; i++)
            sum = sum+nums[i];
        
        return sum;
    }

    int sumMatrix(vector<vector<int>>& matrix, int xStart, int xEnd, int yStart, int yEnd){
        int sum = 0;
        
        for(int i=yStart; i<=yEnd; i++)
            sum = sum+sumLine(matrix[i], xStart, xEnd);
        
        return sum;
    }

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int sumMax = INT_MIN, sum = 0;
        int ySize = matrix.size(), xSize = matrix[0].size();
        for(int i=0; i<xSize; i++)
            for(int j=0; j<ySize; j++)
                for(int ii=i; ii<xSize; ii++)
                    for(int jj=j; jj<ySize; jj++){
                        sum = sumMatrix(matrix, i, ii, j, jj);
                        if(sum>sumMax && sum<=k)
                            sumMax = sum;
                    }
        return sumMax;
    }
};

int main(void){
    vector<vector<int>> matrix = {{5,-4,-3,4},{-3,-4,4,5},{5,1,5,-4}};
    int k = 10;
    Solution test;
    cout<<"\nThe result is "<<test.maxSumSubmatrix(matrix, k)<<endl;
    return 0;
}