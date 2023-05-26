//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
     int l,mod;
    int dp[1001][1001];
    int solve(int i,int n,int x,int sum){
        if(sum==n)return 1;
        if(i>=l||sum>n)return 0;
        if(dp[i][sum]!=-1)return dp[i][sum]%mod;
        int ans=solve(i+1,n,x,sum)%mod;
        int tmp=pow(i,x);
        if((sum+tmp)<=n)ans=(ans%mod+solve(i+1,n,x,sum+tmp)%mod)%mod;
        return dp[i][sum]=ans;
    }
    int numOfWays(int n, int x)
    {
        l=1;
        mod=1000000007;
        while(pow(l,x)<=n)l++;
        for(int i=0;i<l+1;i++)
        for(int j=0;j<=n;j++)dp[i][j]=-1;
        
      return solve(1,n,x,0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends