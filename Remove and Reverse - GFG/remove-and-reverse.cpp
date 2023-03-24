//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        string ans="";
        int n=s.size();
        unordered_set<char>q;
        unordered_map<char,int>m;
        unordered_map<int,int>p;
        for(int i=0;i<n;i++){
            m[s[i]]++;
      
            p[i]=1;
        }
        int i=0,j=n-1;
        int k=i;
        int r=0;
        while(i<n&&j>=0&&i<=j){
            if(m[s[k]]>1){
                    m[s[k]]--;
                    p[k]=0;
                    if(r){
                        j--;
                        k=i;
                        r=0;
                    }
                    else {
                        i++;
                        k=j;
                        r=1;
                    }
                }
                
            else {
                if(r){
                    k--;
                    j--;
                }else{
                    i++;k++;
                }
            }
        }
        
        for(int i=0;i<n;i++){
           if(p[i]>0)ans+=s[i]; 
        }
        // cout<<r;
        // cout<<endl<<ans<<endl;
        if(r)reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends