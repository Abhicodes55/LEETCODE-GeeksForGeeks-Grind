//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
          int total = n*m;

        int count = 0;

 

        int sRow = 0;

        int eRow = n-1;

        int sCol = 0;

        int eCol = m-1;

 

        while(count < total)

        {

            //first row

            for(int i = sCol; count < total && i <= eCol; i++){

                count++;

                if(k == count)

                    return a[sRow][i];

            }

            sRow++;

            

            //last column

            for(int i = sRow; count < total && i <= eRow; i++){

                count++;

                if(k == count)

                    return a[i][eCol];

            }

            eCol--;

            

            //last row

            for(int i = eCol; count < total && i >= sCol; i--){

                count++;

                 if(k == count)

                    return a[eRow][i];

            }

            eRow--;

            

            //first column

            for(int i = eRow; count < total && i >= sRow; i--){

                count++;

                if(k == count)

                    return a[i][sCol];

            }

            sCol++;

            

        }
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends