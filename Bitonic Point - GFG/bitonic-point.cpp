//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   // using Binary Search-> TC-O(N)
	  int start=0,end=n-1,mid;
	  while(start<end){
	       mid= start+(end-start)/2;
	       if(arr[mid]>arr[mid+1]){//it means we are in decreasing half of array 
	           end=mid;//reducing search space towards left
	       }
	       else{//it means we are in increasing half of array 
	           start=mid+1;//reducing search space towards right
	       }
	  }//After this loop both start and end will point to same element
	  return arr[start];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends