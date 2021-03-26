// 0083_Remove Duplicates from Sorted List
#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p;
        if(head == nullptr)
            return nullptr;
        p = head;
        while(p){
            if(p->next==nullptr)
                break;
            if(p->val == p->next->val)
                p->next = p->next->next;
            else
                p = p->next;
        }
        return head;
    }
};

int main(void){
    return 0;
}