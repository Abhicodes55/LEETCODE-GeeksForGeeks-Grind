//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
          int max=*max_element(arr.begin(),arr.end());
       vector<int> mp(max+1,0);
       
       for(int i=0;i<N;i++){
           int x=arr[i];
           if(mp[x]>1)
           continue;
           else{
               for(int i=x;i<mp.size();i+=x){
                   mp[i]++;
               }
           }
       }
       
       int ans=0;
       for(int i=0;i<N;i++){
           if(mp[arr[i]]>1) ans++;
       }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends