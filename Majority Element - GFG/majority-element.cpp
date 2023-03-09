//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int nums[], int size)
    {   
       //Using The Boyer-Moore voting method, it is one of the most often used optimum algorithms for determining the majority element among elements with more than N/2 occurrences. This works wonderfully for finding the majority element, which requires two traversals over the provided items and is of O(N) time and O(1) space complexity.
      int count=0,ele=0;
      for(int i=0;i<size;i++){
          if(count==0){
              ele=nums[i];
          }
          if(nums[i]==ele){
              count++;
          }
          else{
              count--;
          }
          
      }
      count=0;
      //After getting majority element checking the total frequency count of that element
      //if it is greater than size/2 return majority element else there is no majority element so return -1;
      for(int i=0;i<size;i++){
          if(nums[i]==ele){
             count++; 
          }
      }
      if(count>size/2){
          return ele;
      }
      return -1;
      

    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends