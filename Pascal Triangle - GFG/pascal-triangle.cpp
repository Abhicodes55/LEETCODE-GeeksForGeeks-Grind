//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
     const int mod = 1e9+7;
    vector<ll> nthRowOfPascalTriangle(int n) {
         vector<ll>ans;
        for(ll i=0;i<n;i++)
        {
            ans.push_back(1);
            for(ll j=i-1;j>=1;j--)
            {
                ans[j]=(ans[j]+ans[j-1])%mod;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends