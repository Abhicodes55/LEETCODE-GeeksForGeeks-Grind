//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
       public:

    int b_search(int arr[], int start, int end, int key){

        int mid;

        while(start<=end){

            mid=(start+end)/2;

            if(arr[mid]==key){

                return mid;

            }else if(arr[mid]<key){

                start=mid+1;

            }else{

                end=mid-1;

            }

        }

        return -1;

    }

    int search(int A[], int l, int h, int key){

        int pivot_index=0;

        for(int i=0;i<h;i++){

            if(A[i]>A[i+1]){

                pivot_index=i+1;

            }

        }

        int ans=-1;

        if(pivot_index==0){

            ans=b_search(A,0,h,key);

        }else{

            int l_ans=b_search(A,0,pivot_index-1,key);

            int r_ans=b_search(A,pivot_index,h,key);

            if(l_ans==-1){

                ans=r_ans;

            }else{

                ans=l_ans;

            }

        } 

        return ans;

    }


};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends