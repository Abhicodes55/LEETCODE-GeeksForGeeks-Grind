//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        //These count variable is used to store the count of the nodes as we move on
        int count = 0;
        //Assigning the head to the current
        node* curr = head;
        //Assigning the next and previous to the NULL
        node* prev =NULL ;
        node* next = NULL;
        //Now move until the current node goes to the last node and count is less than k
        while(curr != NULL && count < k)
        {
            //Make the next assigning to the next of the current node
            next=curr->next;
            //Make the prrev as next of curr
            curr->next=prev;
            //Assign current to the prev
            prev=curr;
            //Assign prev as next
            curr=next;
            
            //Increment the count
            count++;
        }
        //These code snippet is for remaining nodes in the list and using recursion
        if(next != NULL)
        {
            head->next=reverse(next,k);
        }
        //As prev goes to the head of the new list which is reversed then return that
        return prev;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends