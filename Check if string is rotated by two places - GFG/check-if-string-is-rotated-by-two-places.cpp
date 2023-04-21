//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string s, string s2)
    {   
        
        string anticlk=s;
        reverse(anticlk.begin(),anticlk.end());
        reverse(anticlk.begin(),anticlk.end()-2);
        reverse(anticlk.end()-2,anticlk.end());
        string clk=s;
        reverse(clk.begin(),clk.end());
        reverse(clk.begin(),clk.begin()+2);
        reverse(clk.begin()+2,clk.end());
        if(clk==s2||anticlk==s2){
            return 1;
        }
        else{
            return 0;
        }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends