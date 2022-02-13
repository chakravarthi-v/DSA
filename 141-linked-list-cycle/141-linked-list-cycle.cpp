/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)return false;
        ListNode *first=new ListNode(0),*second=head;
        first->next=head;
        while(first->next!=second->next&&second->next!=NULL&&second->next->next!=NULL){
            first=first->next;
            second=second->next->next;
        }
        if(first->next==second->next)return true;
        else return false;
        
    }
};