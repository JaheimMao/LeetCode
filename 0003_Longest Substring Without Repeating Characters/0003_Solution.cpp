//3.Longest Substring Without Repeating Characters
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> Hash;
        int start = 0, end = 0, result = 0;
        for(int i=0; i<s.length(); i++){
            auto it = Hash.find(s[i]);
            if(it != Hash.end()){
                start = it->second;
            }
            else
                end++;
            Hash[s[i]] = i;
            result = max(result, abs(end-start));    
        }
        return result;
    }
};

int main(void)
{
    Solution test;
    string s = "bbbbb";
    cout<<test.lengthOfLongestSubstring(s)<<endl;
}