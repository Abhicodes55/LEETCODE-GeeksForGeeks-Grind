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

        int len1 = (m-l)+1;

        int len2 = r-m;

        int *first = new int[len1];

        int *second = new int[len2];

         

        int index = l;

        for(int i = 0; i < len1; i++)

            first[i] = arr[index++];

        

        index = m+1;

        for(int i = 0; i < len2; i++)

            second[i] = arr[index++];

            

        int i = 0;

        int j = 0;

        index = l;

        while(i < len1 && j < len2)

        {

            if(first[i] < second[j])

                arr[index++] = first[i++];

            else

                arr[index++] = second[j++];

        }

        

        while(i < len1)

            arr[index++] = first[i++];

        

        while(j < len2)

            arr[index++] = second[j++];

        

        delete []first;

        delete []second;

    }

    public:

    void mergeSort(int arr[], int l, int r)

    {

       if(l < r){

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