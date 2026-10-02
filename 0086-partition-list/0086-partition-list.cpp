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
    ListNode* partition(ListNode* head, int x) {
          if(head ==NULL) return NULL;
        // ListNode*less=nullptr;
        ListNode*lhead=nullptr;
        ListNode*ltail=nullptr;
        // ListNode*great=nullptr;
        ListNode*ghead=nullptr;
        ListNode*gtail=nullptr;
        ListNode*i=head;
        while(i != nullptr){
            if(i->val < x) {
                 if(lhead == nullptr){
                     ListNode* less=new ListNode();
                      less->val=i->val;
                      less->next=NULL;
                      lhead=less;
                      ltail=less;
                      
                 }
                 else{
                    ListNode*less=new ListNode();
                    less->val=i->val;
                    less->next=NULL;
                    ltail->next=less;
                    ltail=less;
                 }
            }
            else {
                //   if(i->val >= x) {
                 if(ghead == nullptr){
                      ListNode* great=new ListNode();
                      great->val=i->val;
                      great->next=NULL;
                      ghead=great;
                      gtail=great;
                      
                 }
                 else{
                    ListNode* great=new ListNode();
                    great->val=i->val;
                    great->next=NULL;
                    gtail->next=great;
                    gtail=great;
                 }
            }
            // }
            i=i->next;
        }
      
        if(lhead == nullptr && ghead != nullptr) return ghead;
        else if(lhead != nullptr && ghead == nullptr) return lhead;
        else if(lhead != nullptr && ghead != nullptr) {
            ltail->next=ghead;
             return lhead;
      }
      return NULL;
    }
};