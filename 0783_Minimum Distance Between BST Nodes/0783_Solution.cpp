// 0783_Minimum Distance Between BST Nodes
#include<iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
 
class Solution {
public:
    int pre = -0x3fffffff;
    int minDiffInBST(TreeNode* root) {
        if(!root)
            return 0x3fffffff;
        int l = minDiffInBST(root->left);
        l = min(l, (root->val)-pre);
        pre = root->val;
        cout<<"pre="<<pre<<endl;
        int r = minDiffInBST(root->right);
        cout<<"test"<<endl;
        return min(l,r);
    }
};

int main(void){
    return 0;
}