#include <bits/stdc++.h>

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

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        if(head==NULL||head->next==NULL) return head;
        Node *zero=NULL,*one=NULL,*two=NULL,*curr=head;
        Node *zeroH=NULL,*oneH=NULL,*twoH=NULL;
        while(curr!=NULL){
            int i=curr->data;
            if(i==0){
                if(zero==NULL){
                    zero=curr;
                    zeroH=zero;
                }
                else{
                    zero->next=curr;
                    zero=zero->next;
                }
            }
            else if(i==1){
                if(one==NULL){
                    one=curr;
                    oneH=one;
                }
                else{
                    one->next=curr;
                    one=one->next;
                }
            }
            else if(i==2){
                if(two==NULL){
                    two=curr;
                    twoH=two;
                }
                else{
                    two->next=curr;
                    two=two->next;
                }
            }
            curr=curr->next;
        }
       
         if(zero) zero->next=NULL;
        if(one) one->next=NULL;
        if(two) two->next=NULL;
      if(zeroH){
          if(oneH){
              zero->next=oneH;
              zero=one;
          }
          if(twoH){
              zero->next=twoH;
          }
          return zeroH;
      }
      else if(oneH){
          if(twoH){
              one->next=twoH;
          }
          return oneH;
      }
      else return twoH;
        
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends