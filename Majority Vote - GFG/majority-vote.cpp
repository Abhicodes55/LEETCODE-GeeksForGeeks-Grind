//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        if(n==1){
            return nums; //Edge cases
        }
        if(n==0){
            nums.push_back(-1);
            
            return nums;
        }
        //Using Boyer-Moore Algo
        
        int candidate1=INT_MIN,candidate2=INT_MIN,count1=0,count2=0;
        vector<int>majority;
        for(int i=0; i<n; i++)
        {
           
            if(nums[i]==candidate1){
                count1++;
            }
            else if(nums[i]==candidate2){
                count2++;
            }
            else if(count1==0){
                candidate1=nums[i];
                count1=1;
            }
            else if(count2==0){
                candidate2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        //candiate1 and candidate 2 are expected majority elements
         //verifying if an element is a majority element or not by counting its frequency in array
        count1=0,count2=0;
        for(int i:nums){
            if(i==candidate1){
                count1++;}
            if(i==candidate2){
                count2++;}
        }
        //checking if frequency of an element is greater than n/3 or  not
        if(count1>n/3){
            majority.push_back(candidate1);
        }
        if(count2>n/3){
            majority.push_back(candidate2);
        }
        //When majority element is not present in array
        if(majority.size()==0){
            majority.push_back(-1);
        }
        
       return majority; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends