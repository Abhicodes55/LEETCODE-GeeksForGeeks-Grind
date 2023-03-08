//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends



void Rearrange(int arr[], int n)
{   
    if(n==0||n==1){
        return;
    }
   vector<long>v1;
   vector<long>v2;
   for(int i=0;i<n;i++){
       if(arr[i]<0){
           v1.push_back(arr[i]);
       }
       else{
           v2.push_back(arr[i]);
       }
   }
   
   int i=0, j=0,k=0;
   while(j<v1.size()){
       arr[i++]=v1[j++];
   }
   while(k<v2.size()){
       arr[i++]=v2[k++];
   }
}