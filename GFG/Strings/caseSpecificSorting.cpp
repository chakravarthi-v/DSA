#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> lower,upper;
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                lower.push_back(str[i]);
            }
            else{
                upper.push_back(str[i]);
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int f=0,j=0;
        string s="";
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                s+=lower[f];
                f++;
            }
            else{
                s+=upper[j];
                j++;
            }
        }
        return s;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends