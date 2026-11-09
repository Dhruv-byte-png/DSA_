/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n=0, m=0;
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        while(ptr1 != NULL){
            n++;
            ptr1 = ptr1->next;
        }
        while(ptr2 != NULL){
            m++;
            ptr2 = ptr2->next;
        }

        int i = abs(n-m);
        if(n>m){
            while(i){
                headA = headA->next;
                i--;
            }
        }
        else{
            while(i){
                headB = headB->next;
                i--;
            }
        }
        while(headA != NULL and headB != NULL){
            if(headA == headB) return headA;

            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};