//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int row=0;row<2*n-1;row++){
            
            for(int col=0;col<2*n-1;col++){
               int top=row,down=(2*n-2)-row;
               int left=col;
                int right=(2*n-2)-col;
                cout<<(n-min(min(top,down),min(left,right)))<<" ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends