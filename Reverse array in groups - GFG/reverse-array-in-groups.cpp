//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
   void rev(vector<long long>& arr, int s, int e)

    {

       while(s<e)

       {

           swap(arr[s++],arr[e--]);

       }

    }

    

    void reverseInGroups(vector<long long>& arr, int n, int k)

    {

        // code here

        

        int start=0;

        int last=start+k-1;

        while(last<n)

        {

            rev(arr, start, last);

            start=last+1;

            last+=k;

        }

        

        rev(arr, start, n-1);

    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends