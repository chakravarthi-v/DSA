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
    int sizeUtil(ListNode *head1){
        int count=0;
        ListNode *head=head1;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int siz1=sizeUtil(headA),siz2=sizeUtil(headB);
        int diff=abs(siz1-siz2);
        ListNode *large=NULL,*small=NULL;
        if(siz1>siz2)large=headA,small=headB;
        else large=headB,small=headA;
        while(diff>0){
            large=large->next;
            diff--;
        }
        while(large!=NULL&&small!=NULL){
            if(large==small)return large;
            large=large->next;
            small=small->next;
        }
        
        return NULL;
    }
};