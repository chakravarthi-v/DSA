// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int util(string s,string t,int len1,int len2,vector<vector<int>> dp){
        
        
    }
    int editDistance(string s, string t) {
        // Code here
        int len1=s.length(),len2=t.length();
        int dp[len1+1][len2+1];
       
        for(int i=0;i<=len1;i++){
            for(int j=0;j<=len2;j++){
                if(i==0)dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        return dp[len1][len2];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends