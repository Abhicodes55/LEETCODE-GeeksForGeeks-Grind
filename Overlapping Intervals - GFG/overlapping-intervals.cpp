//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         //Sort the intervals 
         sort(intervals.begin(),intervals.end());
         //2D arrray to store result
         vector<vector<int>>Result;
         for(int i=0;i<intervals.size();i++){
             //Case 1 If result array is empty
             if(Result.empty()){
                 Result.push_back(intervals[i]);
             }
             //Case 2 Overlappping interval
             if(Result.back()[1]>=intervals[i][0]){
                Result.back()[1]=max( Result.back()[1],intervals[i][1]);
             }
             //Case 3 Non Overlapping interval
             else{
                Result.push_back(intervals[i]); 
             }
        }
        return Result;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends