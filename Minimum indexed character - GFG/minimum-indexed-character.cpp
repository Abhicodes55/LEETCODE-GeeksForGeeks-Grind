//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {   int ans=-1;
        unordered_map<char,int>map1,map2;
        for(auto it:str){
            map1[it]++;
        }
         for(auto it:patt){
            map2[it]++;
        }
        for(int i=0;i<str.size();i++){
            if(map2.find(str[i])!=map2.end()){
                ans=i;
                return ans;
            }
        }
         for(int i=0;i<patt.size();i++){
            if(map1.find(patt[i])!=map1.end()){
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends