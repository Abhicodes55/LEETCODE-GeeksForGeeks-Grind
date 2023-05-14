//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {

  public:
   #define ll long long
  ll solve(int i,int f,vector<int>&A,vector<vector<ll>>&dp){
      if(i<0){
          return 0;
      }
      if(dp[i][f]!=-1)return dp[i][f];
      if(f==1){
          return dp[i][f]=max(A[i]+solve(i-1,1,A,dp),solve(i-1,0,A,dp));
      }
      else{
          return dp[i][f]=A[i]+solve(i-1,1,A,dp);
      }
      
  }
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        vector<vector<ll>>dp(N,vector<ll>(2,-1));
        return max(solve(N-1,0,A,dp),solve(N-1,1,A,dp));
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends