//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)

    {
       int a[r-l+1];
       int i=l,j=m+1,k=0;
       while(i<=m && j<=r){
         if(arr[i]<arr[j]){
           a[k++]=arr[i++];
         }
        else{
            a[k++]=arr[j++];
          }
       }

    

      while(i<=m){
          a[k++]=arr[i++];
            }

     while(j<=r){
       a[k++]=arr[j++];
          }
     for(int m=l,k=0;m<=r;m++){
       arr[m]=a[k++];
        }
    }


    public:

    void mergeSort(int arr[], int l, int r)

    {

       if(l<r){

           int mid = l + (r-l)/2;

           mergeSort(arr, l, mid); //for left part

           mergeSort(arr, mid+1, r); //for right part

           merge(arr, l, mid, r); //for merging

       }

    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends