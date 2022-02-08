// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    {
        long long dp[value+1][numberOfCoins+1];
        for(int i=0;i<=numberOfCoins;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=value;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=value;i++){
            for(int j=1;j<=numberOfCoins;j++){
                dp[i][j]=dp[i][j-1];
                if(coins[j-1]<=i){
                    dp[i][j]+=dp[i-coins[j-1]][j];
                }
            }
        }
        return dp[value][numberOfCoins];
        
    }
};


// { Driver Code Starts.


int main() {
    
    //taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function numberOfWays
	    cout<<obj.numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends