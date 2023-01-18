//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // outer loop
        for(int row=1;row<=n;row++){
            int start=65;
            //Characters
            for(int col=1;col<=row;col++){
                char ch = char(start);
                cout<<ch;
                start++;
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