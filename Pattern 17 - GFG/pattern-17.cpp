//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char end;
        for(int row=1;row<=n;row++){
            char ch='A';
            for(int space=n-row;space>0;space--){
                cout<<" ";
            }
            for(int i=1;i<=row;i++){
                cout<<ch;
                end=ch-1;
                ch++;
                
            }
            for(int j=row;j>1;j--){
                cout<<end;
                end--;
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