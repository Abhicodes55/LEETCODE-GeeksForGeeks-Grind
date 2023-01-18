//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // upward U
         for(int row=1;row<=n;row++){
             //star
             for(int star=1;star<=row;star++){
                 cout<<"*";
             }
           
           //space
           for(int space=2*n-(row+row);space>=1;space--){
               cout<<" ";
               
           }
           for(int star=1;star<=row;star++){
                 cout<<"*";
             }
           
           cout<<endl;
         }
         //
        for(int row=2;row<=n;row++){
               
            //star
            for(int star=n-row+1;star>=1;star--){
                 cout<<"*";
             }
             //space
             for(int space=1;space<=2*row-2;space++){
               cout<<" ";
                 
             }
               
               for(int star=n-row+1;star>=1;star--){
                 cout<<"*";
             }
             cout<<endl;
           }
        
        

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends