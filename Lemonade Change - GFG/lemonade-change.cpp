//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
       /*
       APPROACH :

Initialize two variables five=0 and ten=0, to keep count of the number of $5 and $10 bills available.
Iterate through the bills vector using a for loop.
Now, here comes the main part of this question, checking if we have change for the current transaction.
If the customer pays $20, we need to return $15. So we will first check if we have 1 * $10 + 1 * $5 = $15 in our bill because we can only use $10 bills to change with $20. If we don't have that combination, we will check for 3 * $5 = $15. If we still don't have the required change, we return false or decrease the count of ten or five, whichever we used as change.
Similarly, if the customer pays $10, we need to return $5. We will first check if we have any $5 bills in our bill. If we don't have any, we return false or decrease the count of five and increase the count of ten.
If the customer pays $5, we simply increase the count of five because we don't need to return any change.
Finally, return true if we are able to return the required change for all $20 and $10 transactions.
       */
       int five=0,ten=0;
        for(int i=0;i<n;i++){
            if(bills[i]==20){
                if(ten && five){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
            else if(bills[i]==10){
                ten++;
                if(five)five--;
                else return false;
            }
            else five++;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends