//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
       int Left_max[N];
       int right_min[N];
       int largest=INT_MIN;
       int smallest=INT_MAX,count=0;
       
       
       for(int i=0;i<N;i++){
            largest = max(largest,A[i]);
            smallest = min(smallest,A[N - i - 1]);
            Left_max[i] = largest;
            right_min[N - i - 1] = smallest;
       }
       for(int  i=0;i<N-1;i++){
           if(Left_max[i]+right_min[ i + 1]>=K){
               count++;
           }
       }
       return count;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends