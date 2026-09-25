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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode*prev=head;
        ListNode*curr=prev->next;
        while(curr != NULL){
            if(prev->val != curr->val){
                prev->next = curr;
                prev=curr;
                curr=prev->next;
            }else {
                curr = curr->next;
            }
        }
        while(prev != NULL && prev->next != NULL){
            if(prev->val == prev->next->val) prev->next = NULL;
        }
        return head;
    }
};