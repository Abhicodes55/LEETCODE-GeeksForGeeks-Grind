//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int min=INT_MAX,ans=-1;
        for(auto k:map){
            if(k.second<min){
                ans=k.first;
                min=k.second;
            }
            else if(k.second==min && k.first>ans){
                ans=k.first;
            }

        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends