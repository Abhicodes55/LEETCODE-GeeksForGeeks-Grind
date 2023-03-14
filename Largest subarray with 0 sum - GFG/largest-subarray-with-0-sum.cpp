//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {  // Using Unorderedmap  
       unordered_map<int,int>map;
       int maxi=0,prefixsum=0;
       for(int i=0;i<n;i++){
           prefixsum+=A[i];
           if(prefixsum==0){
               maxi=i+1;
           }
           else{
               if(map.find(prefixsum)!=map.end()){
                   maxi=max(maxi,i-map[prefixsum]);
                   
               }
               else{
                   map[prefixsum]=i;
               }
           }
       }
       return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends