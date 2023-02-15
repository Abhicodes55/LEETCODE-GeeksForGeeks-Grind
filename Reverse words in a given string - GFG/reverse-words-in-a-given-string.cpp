//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
         string ans = "";
        string word = "";
        for(int i = 0; i < S.length();i++){
            
            if(S[i] == '.'){
              ans = '.'+word + ans;
               word = "";
            }else{
                word += S[i];
            }
        }
        ans = word + ans;
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends