//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        //outer loop
        for(int row=1;row<=n;row++){
            int start;
            if(row%2==0){
                start=0;
            }
            else{
                start=1;
            }
            //numbers
            for(int i=1;i<=row;i++){
                cout<<start<<" ";
                start=1-start;
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