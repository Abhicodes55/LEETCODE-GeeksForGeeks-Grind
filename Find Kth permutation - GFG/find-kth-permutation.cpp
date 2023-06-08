//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        int fact=1;
        vector<int> arr;
        for(int i=0;i<n;i++) arr.push_back(i+1);
        for(int i=1;i<=n-1;i++) fact*=i;
        string curr="";
        k--;
        for(int i=n-1;i>=0;i--)
        {
            int divi=k/fact;
            curr.push_back(arr[divi]+'0');
            arr.erase(arr.begin()+divi);
            k=k%fact;
            if(i==0) break;
            fact/=i;
        }
        return curr;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends