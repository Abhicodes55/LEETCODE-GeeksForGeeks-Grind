//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
          for(int i=1;i<=n;i++){
            //space
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            //star
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            //space
             for(int l=1;l<=n-i;l++){
                cout<<" ";
            }
            cout<<endl;
        }
         for(int m=1; m<=n;m++){
	        //space
	        for(int p=m-1;p>0;p--){
	            cout<<" ";
	        }
	        //star
	        for(int q=1;q<=n-m+1;q++){
	            cout<<"* ";
	        }
	        //space
	        for(int r=1;r<=2*n-(2*m+1);r++){
	            cout<<" ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends