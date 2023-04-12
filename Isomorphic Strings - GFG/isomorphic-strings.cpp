//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Two strings cannot be isomorphic if they have different lengths.
	if (str1.length() != str2.length())
		return false;

	// Use C++'s built in map to store mappings of str1 chars to str2 chars.
	map<char, char> map;

	// Use a set to keep track of already mapped characters.
	set<char> set;

	for (int i = 0; i < str1.length(); i++)
	{
		char c1 = str1[i], c2 = str2[i];
	
		// If c1 has been encountered before:
		if (map.find(c1) != map.end())
		{
			// Return false if first occurrence of c1 is mapped to
			// a different character.
			if (map[c1] != c2)
				return false;
		}
    
		// If c1 is encountered for the first time, it has not been mapped yet:
		else
		{
			// Return false if c2 is already mapped to some other char in str1
			if (set.find(c2) != set.end())
				return false;
		
			// All checks passed. So insert in the map, and the set.
			map[c1] = c2;
			set.insert(c2);
		}
	}
	return true;
  }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends