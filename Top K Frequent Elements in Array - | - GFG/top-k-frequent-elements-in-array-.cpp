//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        //USING MAX HEAP AND UNORDERED MAP
        
        unordered_map<int,int>map;
         priority_queue<pair<int,int>>pq;
         //TC- O(N)
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
       
         // O(NlogN)
        for(auto it:map){
            pq.push({it.second,it.first});//Storing in priority queue acc. to frequency
        }
        // O(N)
        nums.clear();
         //TC- O(K * logN)
        while(k--){
            nums.emplace_back(pq.top().second);
            pq.pop();
        }
        return nums;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends