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
    bool hasCycle(ListNode* head) {
        if(head==nullptr) return false;
        ListNode* curr=head;
        while(curr!=nullptr&&curr->val!=2000){
            curr->val=2000;
            curr=curr->next;
        }
        if(curr==nullptr){
            return false;
        }
        return true;
    }
};
