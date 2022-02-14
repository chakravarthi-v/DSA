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
        ListNode *head=NULL;
        ListNode *point=head;
        int sum=0,carry=0;
        while(l1!=NULL||l2!=NULL||carry>0){
            sum=0;
            sum+=carry;
            if(l1!=NULL){
                sum+=l1->val;
            }
            if(l2!=NULL){
                sum+=l2->val;
            }
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode *temp=new ListNode(sum);
            if(head==NULL)head=temp;
            else{
                point->next=temp;
            }
            point=temp;
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        
        return head;
    }
};