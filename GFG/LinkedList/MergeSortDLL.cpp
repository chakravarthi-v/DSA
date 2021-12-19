#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


 // } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


//Function to sort the given doubly linked list using Merge Sort.
Node *findMid(Node *head){
    Node *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node *mergeSort(Node *head1,Node *head2){
    Node *h1=head1,*h2=head2,*pointer=NULL,*head=NULL;
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    if(h1->data<=h2->data){
        head=h1;
        h1=h1->next;
    }
    else{
        head=h2;
        h2=h2->next;
    }
    pointer=head;
    while(h1&&h2){
       if(h1->data<=h2->data){
        pointer->next=h1;
        h1->prev=pointer;
        h1=h1->next;
        }
        else{
            pointer->next=h2;
            h2->prev=pointer;
            h2=h2->next;
        } 
        pointer=pointer->next;
    }
    if(h1){
        pointer->next=h1;
        h1->prev=pointer;
    }
    if(h2){
        pointer->next=h2;
        h2->prev=pointer;
    }
    return head;
}
struct Node *sortDoubly(struct Node *head)
{
	// Your code here
	if(head==NULL||head->next==NULL) return head;
	Node *mid=findMid(head);
	Node *head1=mid->next;
	mid->next=NULL;
	head1->prev=NULL;
	Node *first=sortDoubly(head);
	Node *second=sortDoubly(head1);
	return mergeSort(first,second);
}


// { Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}
  // } Driver Code Ends