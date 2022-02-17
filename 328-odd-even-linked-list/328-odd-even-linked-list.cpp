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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode *oddH=head,*evenH=head->next;
        ListNode *oddP=oddH,*evenP=evenH,*temp=head->next->next;
        int count=3;
        while(temp!=NULL){
            if(count%2==0){
                evenP->next=temp;
                evenP=temp;
            }
            else{
                oddP->next=temp;
                oddP=temp;
            }
            temp=temp->next;
            count++;
        }
        evenP->next=NULL;
        oddP->next=evenH;
        return oddH;
    }
};