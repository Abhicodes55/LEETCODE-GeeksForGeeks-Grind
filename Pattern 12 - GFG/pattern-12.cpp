//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here  // code here
        for(int row=1;row<=n;row++){
           //num
           int end;
           for(int num=1;num<=row;num++){
               cout<<num<<" ";
               end=row;
               
           }
           //space
           for(int space=2*n-(row+row);space>0;space--){
               cout<<" "<<" ";
               
           }
           //num
           for(int num2=end;num2>=1;num2--){
               cout<<num2<<" ";
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