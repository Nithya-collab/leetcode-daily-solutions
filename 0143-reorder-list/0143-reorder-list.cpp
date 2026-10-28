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
      ListNode* getMiddle(ListNode* head) {
        // returns the last node of the first half
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast != nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* reverseList(ListNode* head) {
        // returns the new head of the reversed list
        // ListNode* sec=getMiddle(head)->next;
        ListNode*prev=nullptr ;
        ListNode*curr=head;
        // ListNode*next=curr->next;
         ListNode* temp=curr->next;
        while(temp != nullptr){
           
            curr->next=prev;

            prev=curr;
            curr=temp;
            temp=temp->next;
        }
        curr->next=prev;


        cout << "Reversed second half: ";
        // printList(curr);

        return curr;
    }

    void reorderList(ListNode* head) {
        if(head==nullptr || head->next == nullptr) return;
        ListNode* mid=getMiddle(head);
        ListNode*sec=mid->next;
        mid->next=nullptr;
        ListNode*rev=reverseList(sec);
        ListNode*l1=head;
        ListNode*l2=rev;

        while(l1!=nullptr && l2!=nullptr){
            ListNode*track1=l1->next;
            ListNode*track2=l2->next;
            l1->next=l2;
            l2->next=track1;
            l1=track1;
            l2=track2;
        }
    }
};