//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
         vector<vector<int>>res;
        vector<int>quads(4,0);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1])continue;
                  int p=j+1;
                  int q=n-1;
                while(p<q){
                long sum=nums[i]+nums[j];
                sum+=nums[p];//to avoid overflow
                sum+=nums[q];
                if(sum<target){
                   p++;
                }
                else if(sum>target){
                q--;
                }
                else{
                  quads={nums[i],nums[j],nums[p],nums[q]};
                  res.push_back(quads);
                  p++;q--;
                  while(p<q && nums[p]==nums[p-1]){
                      p++;
                  }
                  while(p<q && nums[q]==nums[q+1]){
                      q--;
                  }
                }
            }
            }
            
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends