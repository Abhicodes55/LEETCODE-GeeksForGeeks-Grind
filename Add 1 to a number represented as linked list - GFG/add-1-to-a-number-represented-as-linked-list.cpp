//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node*last=NULL,*current=head;
        //Finding last non-nine node
        while(current->next!=NULL){
            if(current->data!=9){
                last=current;
            }
            current=current->next;
        }
        //Case 1: if last element is not 9 
        if(current->data!=9){
            current->data++;
            return head;
        }
        
        //Case 2: if all the elements are 9
        if(last==NULL){
            //creating node with value 1 to attach in front of list
            last=new Node(1);
            last->next=head;
            head=last;
            //updating every node data after this new node to 0
            last=last->next;
            while(last!=NULL){
                last->data=0;
                last=last->next;
            }
            return head;
        }
        
        //Case 3: if 9 is somewhere in middle
        last->data++;
        last=last->next;
        while(last!=NULL){
                last->data=0;
                last=last->next;
            }
    return head;
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends