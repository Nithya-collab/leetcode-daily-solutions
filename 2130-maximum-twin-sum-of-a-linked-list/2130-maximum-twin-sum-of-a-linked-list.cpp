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
    int pairSum(ListNode* head) {

        vector<int> v;
        ListNode* i=head;
        while(i!=nullptr){
            v.push_back(i->val);
            i=i->next;
        }

        int left=0,right=v.size()-1;
        int temp=INT_MIN;
        while(left < right){
            if(temp < v[left]+v[right]) temp = v[left]+v[right];
            left++;
            right--;
        }
        return temp;
    }
};