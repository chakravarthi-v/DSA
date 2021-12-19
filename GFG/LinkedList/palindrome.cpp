#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node *h){
        Node *curr=h,*prev=NULL;
        while(curr!=NULL){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        Node *curr=slow->next;
        slow->next=NULL;
        Node *secH=reverse(curr);
        
        curr=head;
        while(curr&&secH){
            if(curr->data!=secH->data) return false;
            curr=curr->next;
            secH=secH->next;
        }
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends