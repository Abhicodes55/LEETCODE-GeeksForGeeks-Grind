//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int N)
    {
      if(N==0)return 0;
        unordered_map<int,int>umap;
        int count=0;
        int Maxcount=0;
        for(int i=0;i<N;i++){
            umap[nums[i]]=1;//Assuming every element is a sequence starter and initialising it to 1
        }
        for(int i=0;i<N;i++){
            if(umap.find(nums[i]-1)==umap.end()){
                umap[nums[i]]=0;//Sequence starters initilised to Zero
            }
        }
        //Before 3rd loop this loop all the sequence starters are found now we just need to calculate length of each sequence
        //and compare with maxcount
        for(int i=0;i<N;i++){
            if(umap[nums[i]]==0){
                count=1;
                while(umap.find(nums[i]+count)!=umap.end()){
                    count++;//counting length of a sequence until we can find a number+1 in map
                }
                Maxcount=max(Maxcount,count);//Comparing and storing max value of sequence
            }
        }
      
        return Maxcount;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends