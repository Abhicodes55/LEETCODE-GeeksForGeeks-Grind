//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int index=0,found=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                index=i;
                found=1;
            }
        }
        if(found==0)return -1;
        return index;
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends