//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        int dig=1,sum=0;
        while(n>0){
            int s=n%4;
            if(s==1){
                sum+=dig*2;
            }
            else if(s==2){
                sum+=dig*3;
            }
            else if(s==3){
                sum+=dig*5;
            }
            else{
                sum+=dig*7;
            }
            dig*=10;
            if(n%4==0){
                n=n/4 -1;
            }
            else{
                n=n/4;
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}
  // } Driver Code Ends