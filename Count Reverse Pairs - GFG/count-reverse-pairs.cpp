//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void merge(vector<int>& arr, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        
        
        vector<long long> temp;
        
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right] ) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
    
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;   
        }
    
        // copy to the original array
        for (int i=low; i<= high; i++) {
            arr[i] = temp[i - low];
        };
    }
    int Countpairs(vector<int>& arr, int low, int mid , int high){
        int right=mid+1;
        int count=0;
        for(int i=low;i<=mid;i++){
             while(right<=high && arr[i]>2*(long long)arr[right])right++;
             count+=(right-(mid+1));
        }
        return count;
        
    }
    
    int mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) return 0;
        int cnt = 0;
        int mid = low + ( (high - low) >> 1 ) ;
        
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt+=Countpairs(arr,low,mid,high);
        merge(arr, low, mid, high);
        return cnt;
    }
    
    int countRevPairs(int n, vector<int> arr) {
        return mergeSort(arr,0,n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends