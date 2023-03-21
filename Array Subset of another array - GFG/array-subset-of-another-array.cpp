//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>umap;
    set<int>set;
    string res="Yes";
    for(int i=0;i<n;i++){
        umap[a1[i]]++;
    }
    for(int j=0; j<m; j++){
        if(umap[a2[j]]==0){
            res="No";
            return res;
        }
        else{
            umap[a2[j]]--;
        }
    }
    return res;
}