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
    int getDecimalValue(ListNode* head) {
        int cnt = 1;
        int num = 0;
        ListNode* ptr = head;

        while(ptr != NULL){
            ptr = ptr->next;
            cnt *=2;
        }
        cnt /= 2;
        ptr = head;

        while(ptr != NULL){
            num += ptr->val *cnt;
            cnt /=2;
            ptr = ptr->next;
        }

        return num;

    }
};