//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
      int a=0;

        int ind=0;

        for(int i=1;i<=s.size()/2;i++){

           if( s.substr(0,i) == s.substr(i,i) ) {

               a=1;

               ind=i;

           }

        }

        int ans=s.size(); 

        ans= ans-ind+a;

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends