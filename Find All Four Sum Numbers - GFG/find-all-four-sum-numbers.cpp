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
        int n=nums.size();
        if(n==0)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target_2=target-nums[i]-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum<target_2){
                        front++;
                    }
                    else if(two_sum>target_2){
                        back--;
                    }
                    else{
                        vector<int>quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        res.push_back(quad);
                        //skipping duplicates for front pointer
                        while(front<back && nums[front]==quad[2])++front;
                         //skipping duplicates for back pointer
                        while(front<back && nums[back]==quad[3])--back;

                    }
                }
                //skipping duplicates for j pointer 
                while(j+1<n && nums[j+1]==nums[j]){
                  ++j;
                }
            }
             //skipping duplicates for i pointer 
                while(i+1<n && nums[i+1]==nums[i]){
                   ++i;
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