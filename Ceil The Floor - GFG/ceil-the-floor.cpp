//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int v[], int n, int x) {
     sort(v , v+n);

       

       pair<int , int>finalans;

    

        int i=0;

        int j=n-1;

        int ans1 =-1;

        while(i<=j){

            int mid = i+(j-i)/2;

            if(v[mid]==x){

                ans1 =v[mid];

                break;

            }

            else if(v[mid]<x){

                ans1=v[mid];

                i=mid+1;

            }

            else if(v[mid]>x){

                j=mid-1;

            }

        }

        finalans.first = ans1;

        

        int k=0;

        int l=n-1;

        int ans2=-1;

        while(k<=l){

            int mid=k+(l-k)/2;

            if(v[mid]==x){

                ans2=v[mid];

                break;

            }

            else if(v[mid]>x){

                ans2=v[mid];

                l=mid-1;

            }

            else if(v[mid]<x){

                k=mid+1;

            }

        }

        finalans.second = ans2;

        return finalans;
}