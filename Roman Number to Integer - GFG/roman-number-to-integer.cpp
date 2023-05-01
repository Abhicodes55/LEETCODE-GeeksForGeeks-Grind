//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
          unordered_map<char,int>map;
        int total=0,prev=0;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        for(auto it:s){
           
           if(prev==1&&it=='V'){
               total=(total-prev)+map[it]-prev;
           }
           else if(prev==1&&it=='X'){
               total=(total-prev)+map[it]-prev;
           }
           else if(prev==10&&it=='L'){
               total=(total-prev)+map[it]-prev;
           }
           else if(prev==10&&it=='C'){
              total=(total-prev)+map[it]-prev;
           }
           else if(prev==100&&it=='D'){
               total=(total-prev)+map[it]-prev;
           }
           else if(prev==100&&it=='M'){
               total=(total-prev)+map[it]-prev;
           }
           else{
               total+=map[it];
           }
           prev=map[it];

        }
        return total;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends