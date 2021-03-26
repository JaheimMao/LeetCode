//0082_Remove Duplicates from Sorted List II
#include<iostream>

using namespace std;

/* Definition for singly-linked list.*/
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
        ListNode *p, *q, *pn;
         if(head == nullptr)
            return nullptr;
        q = new ListNode(head->val-1);
        q->next = head;
        head = q;
        p = q;
        pn = p->next;
        while(p&&pn){
            if(pn->next == nullptr){
                if(p->val != pn->val){
                    q->next = pn;
                    q = q->next;
                }
                break;
            } 
            if((p->val!=pn->val) && (pn->val!=pn->next->val)){
                q->next=pn;
                q=q->next;
            }
            p = p->next;
            pn = pn->next;
        }
        q->next = nullptr;
        return head->next;
    }
};

int main(void){
    Solution test;
    ListNode * head = nullptr, *p, *result;
    int a[7] ={1,2,3,3,4,4,5} ;
    head = new ListNode(a[0]);
    p = head;
    for(int i=1;i<7;i++){
        p ->next = new ListNode(a[i]);
        p = p->next;
    }
    
    p = test.deleteDuplicates(head);
    return 0;
}
