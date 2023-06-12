//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
      int n = N;
        int maxLen = 0;
        int sum = 0;
        map<int, int> prefixSum;
        // 1 2 3 1 1 1 1 4 2 3 k=3
        // We will use prefix sum concept here
        
        for (int i = 0; i < n; i++) {
            sum += A[i]; // adding new elements into the sum
            if (sum == K) { // if sum = required sum then we take maximum
            // length of the index
                maxLen = max(maxLen,  i + 1);
            }
            int rem = sum - K; // now there can exist so many subarray and
            // let's take an example like we are at index 2 which is 3
            // and 3 is k so previously we have sum=3 and maxLen = 2 {1,2}
            // so we are at index 2 now and arr[2] = 3 which is also an
            // subarray if we do rem = sum-k
            // sum = 6 at index 2 and k = 2
            // so 6-3  = 3 
            
            // now we will be checking is 3 present in the map 
            // if it is present then we get the value as prefixSum[sum]=i at
            // index 1 would have inserted 3,1 in the map
            // so were taking about index 2 and checking weather 3 is present
            // in the map so it is present in the map with index 1
            if (prefixSum.find(rem) != prefixSum.end()) { // found condition
                int currLen = i - prefixSum[rem]; // so here i = 2 - prefixSum[3]
                // prefixSum[3] gives you 1 it gives us the value of the 3 key
                // so in currLen we get 2-1 = 1
                maxLen = max(maxLen, currLen); // now we check that is it the maxLen
            }
            if (prefixSum.find(sum) == prefixSum.end()) // if the particular sum is not found in the map then it 
                // is the new sum and we insert it into the map
                prefixSum[sum] = i; // sum is key and i is value
        }
        return maxLen;
    } 

    

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends