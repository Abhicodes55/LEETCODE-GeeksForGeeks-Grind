//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        
       //outer loop
       for(int row=1;row<=2*n-1;row++){
           int stars=row;
           if(row>n){
               stars=2*n-row;
           }
           for(int j=1;j<=stars;j++){
               cout<<"*"<<" ";
           }
           cout<<endl;
           
       }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends