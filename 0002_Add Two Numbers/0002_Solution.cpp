//0002_Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result, *p1 = l1, *p2 = l2, *p ;
        int carry = 0;
        int temp = 0;
        result = new ListNode();
        p = result;
        while(p1 || p2){
            if(p1 == nullptr){
                temp = carry + p2->val;
                p2 = p2->next;
            }
                
            else if(p2 == nullptr){
                temp = carry + p1->val;
                p1 = p1->next;
            }
            else{
                temp = carry + p1->val + p2->val;
                p1 = p1->next;
                p2 = p2->next;
            }
            if(temp > 9){
                carry = 1;
                temp = temp % 10;
            }
            else
                carry = 0;
            p->next = new ListNode(temp);
            p = p->next;
        }
        if(carry)
            p->next = new ListNode(1);
        return result->next;
    }
};