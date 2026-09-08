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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tail1 = new ListNode(0);
        ListNode* tail2 = tail1;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry !=0){
            int num1 = (l1 != nullptr) ? l1->val : 0;
            int num2 = (l2 != nullptr) ? l2->val : 0;

            int sum = num1 + num2 + carry;
            int digit = sum %10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);
            tail2->next = newNode;
            tail2 = tail2->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = tail1->next;
        delete tail1;
        return result;
    }
};