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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode head(0);
        ListNode* curr=&head;
        while(curr1!=nullptr||curr2!=nullptr){
           
            
            if(curr1!=nullptr&&curr2!=nullptr){
                 ListNode* next1=curr1->next;
            ListNode* next2=curr2->next;
               if(curr1->val<=curr2->val){
                curr->next=curr1;
                curr1=next1;
               }else{
                curr->next=curr2;
                 curr2=next2;
               }
               
            }else if(curr1!=nullptr){
               ListNode* next1=curr1->next;
                curr->next=curr1;
                 curr1=next1;
            }else{
                ListNode* next2=curr2->next;
                curr->next=curr2;
                 curr2=next2;
            }
            curr=curr->next;
        }
        return head.next;
        
    }
};
