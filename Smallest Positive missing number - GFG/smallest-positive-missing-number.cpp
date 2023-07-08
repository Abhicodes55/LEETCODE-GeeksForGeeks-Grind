//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int x = n+1;
               
        for(int i=0;i<n;i++){
            if(arr[i]>x)
            arr[i]*=-1; //if greater than n to koi kaam ka nhi h negative krdo
        }
        for(int i=0;i<n;i++){
            if(arr[i]<=0 || arr[i]==1e9)continue; // if negative h zero h to b koi kaam ka nhi h 
            //agr 1e9 h to update ho gya phle to chedkhaani n krni iske sath
            
             if(arr[i]%x ==0) {   //ye case agr element hi n+1 k braber ho to isko alag se handle kiya
             
                arr[x-1] = arr[x-1] + 1*x;
                continue;
            }
            else if(arr[(arr[i]%x)-1] <0) {//jb hum jis index pr jaa rhe h vha phle se negative h to 1e9 daal do 
            //taaki visit ho chuka
                arr[(arr[i]%x)-1]  = 1e9;
             continue;   
            }
           
           //otherwise simple daalte jao aur modulo krte jao
            arr[(arr[i]%x)-1] = arr[(arr[i]%x)-1]+ 1*x;
        }
        
        for(int i=0;i<n;i++)
        {   
            //jo negative h mtlb vo nhi mila hme or jo n se km h mtlb vo b nhi mile
            //arr[i]<=n mtlb kisi n update n kia update hua hota to n se bda hota obv jis hisab se humne calculation ki h
             if(arr[i]<=0 || arr[i]<=n)return i+1;
            
        }
        
        return n+1;

        
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends