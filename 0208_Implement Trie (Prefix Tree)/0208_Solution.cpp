// 0208_Implement Trie (Prefix Tree)
#include<iostream>
#include<cstring>

using namespace std;

class Trie {
private:
    bool isEnd;
    Trie* children[26];
public:

    /** Initialize your data structure here. */
    Trie() {
        memset(children, 0, sizeof(children));
        isEnd = false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* node = this;
        for(char ch : word){
            ch -= 'a';
            if(node->children[ch] == nullptr)
                node->children[ch] = new Trie();
            node = node->children[ch];
        }
        node->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* node = this;
        for(char ch : word){
            ch -= 'a';
            if(node->children[ch] == nullptr)
                return false;
            node = node->children[ch];
        }
        return node->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* node = this;
        for(char ch : prefix){
            ch -= 'a';
            if(node->children[ch] == nullptr)
                return false;
            node = node->children[ch];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main(void){
    Trie obj = Trie();
    obj.insert("apple");
    cout<<"test search:"<<obj.search("apple")<<endl;
    cout<<"test startWith:"<<obj.startsWith("appp")<<endl;
    return 0;
}