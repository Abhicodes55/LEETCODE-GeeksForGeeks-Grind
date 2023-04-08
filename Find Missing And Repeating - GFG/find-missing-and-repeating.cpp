//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
   
       //Using swap sort:- put array element at its right position
       //If element not at it's correct position then swap it with element        index
     
       
       int *ans = new int[2];
       int i=0;
        while(i<n){
           
           //If element not its correct index 
         int index = arr[i]-1;
         
         if(arr[i] != arr[index]){
             swap(arr[index], arr[i]);
         }
         else{
            
              ++i;
         }
       }
       for(int i=0; i<n; i++){
           if((i+1) != arr[i]){
           
               ans[0] = arr[i]; //repeating element
               ans[1] = i+1;   //missing element 
               break;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends