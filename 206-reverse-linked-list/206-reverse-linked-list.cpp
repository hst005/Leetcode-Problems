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
      ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        if(head->next == nullptr){
            return head;
        }
        ListNode* temp = reverseList(head->next);
        ListNode* temp2 = head->next;
        temp2->next = head;
        head->next = nullptr;
        return temp;

    }
};