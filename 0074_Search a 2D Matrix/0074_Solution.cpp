// 0074_Search a 2D Matrix
// 两次二分查找
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0, high=0, p=0, mid=0;
        high = matrix.size()-1;
        while(low<=high){
            mid = (low+high)/2;
            if(matrix[mid][0] == target)
                return true;
            else if(matrix[mid][0]>target)
                high = mid-1;
            else if(matrix[mid][0]<target)
                low = mid+1;
        }
        p = high;
        if(p<0)
            p = 0;
        low = 0;
        high = matrix[0].size()-1;
        while(low<=high){
            mid = (low+high)/2;
            if(matrix[p][mid] == target)
                return true;
            else if(matrix[p][mid]>target)
                high = mid-1;
            else if(matrix[p][mid]<target)
                low = mid+1;
        }
        return false;
    }
};

int main(void){
    vector<vector<int>> matrix;
    Solution test;
    int target;
    //matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    matrix = {{1}};
    target = 0;
    cout<<test.searchMatrix(matrix,target)<<endl;
    return 0;
}