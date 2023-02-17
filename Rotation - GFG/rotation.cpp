//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
     int findKRotation(int arr[], int n) {

     int low=0,high=n-1;

     while(low<=high){

         if(arr[low]<arr[high])return low;

       int mid=(low+high)/2;

       if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]) return mid;

       if(mid==low){

           int ans=arr[mid]<arr[high]?mid:high;

           return ans;

       }

       if(arr[mid]>arr[low]) low=mid+1;

       else high=mid-1;

       

     }  

 }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends