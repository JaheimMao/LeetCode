
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p = nullptr ,*q =nullptr;
        int i = 0, listlength = 0;
        p = head;
        q = head;
        if(head == nullptr)
            return head;
        while(p->next){
            p = p->next;
            i++;
        }
        listlength = i+1;
        if(k==0)
            return head;
        p->next = head;
        
        for(i=1; i<listlength-k%(listlength); i++)
            q = q->next;

        head = q->next;
        q->next = nullptr;  
        
        return head;
    }
};