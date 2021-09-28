//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int count=0;
        for(int i=2;i*i<=N;i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
        
    }
    bool isPrime(int num){
        if(num==2||num==3){
            return true;
        }
        else if(num%2==0||num%3==0){
            return false;
            
        }
        else{
            for(int i=5;i*i<=num;i=i+6){
                if(num%i==0||num%(i+2)==0){
                    return false;
                }
            }
            return true;
        }
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends