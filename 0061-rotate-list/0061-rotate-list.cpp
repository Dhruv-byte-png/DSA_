/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 1;

        if(!head || head->next==NULL || k==0)return head;

        ListNode *tail = head;
        while(tail->next){
            tail = tail->next;
            len++;
        }

        k %= len;
        if(k==0) return head;

        tail->next = head;

        int steps = len-k;
        ListNode *newNode = head;
        for(int i=1; i<steps; i++) newNode = newNode->next;

        ListNode *newhead = newNode->next;
        newNode->next = NULL;
        return newhead;
    }
};