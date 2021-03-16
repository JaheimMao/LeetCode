//3.Longest Substring Without Repeating Characters
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> Hash; //创建Hash表
        int start = 0, result = 0, length = 0;
        for(int i=0; i<s.length(); i++){
            auto it = Hash.find(s[i]); //查找Hash表内是否存在当前字母，判断有无重复
            if(it != Hash.end() && start <= it->second){
                start = it->second+1;
                length = i - start;
            }
            length ++;
            Hash[s[i]] = i;
            result = max(result, length);    
        }
        return result;
    }
};

int main(void)
{
    Solution test;
    string s = "tmmzuxt";
    cout<<test.lengthOfLongestSubstring(s)<<endl;
}