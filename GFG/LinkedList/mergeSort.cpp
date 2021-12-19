#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
  Node *merge(Node *head1,Node *head2){
      Node *h1=head1,*h2=head2;
      if(head1==NULL){
          return head2;
      }
      if(head2==NULL){
          return head1;
      }
    Node *pointer=NULL;
      if(h1->data<=h2->data){
              pointer=h1;
              h1=h1->next;
          }
          else{
              pointer=h2;
              h2=h2->next;
          }
          Node *head=pointer;  
      while(h1 && h2){
          if(h1->data<=h2->data){
              head->next=h1;
              h1=h1->next;
          }
          else{
              head->next=h2;
              h2=h2->next;
          }
          head=head->next;
      }
      if(h1){
          head->next=h1;
      }
      if(h2){
          head->next=h2;
      }
      return pointer;
      
  }
  Node* findMid(Node *head){
      Node *slow=new Node(0),*fast=head;
      slow->next=head;
      while(fast!=NULL&&fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
      }
      return slow;
  }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL||head->next==NULL)return head;
        Node *mid=findMid(head);
        Node *head1=mid->next;
        mid->next=NULL;
        Node *first=mergeSort(head);
        Node *second=mergeSort(head1);
        return merge(first,second);
        
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends