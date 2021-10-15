

// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void pow(string s,vector<string> &p,int index=0,string curr=""){
    if(index==s.size()){
        p.push_back(curr);
        
        return ;
    }
    else{
        pow(s,p,index+1,curr);
        pow(s,p,index+1,curr+s[index]);
    }
}
vector <string> powerSet(string s)
{
   //Your code here
   vector<string>p;
   pow(s,p);
   
   return p;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends