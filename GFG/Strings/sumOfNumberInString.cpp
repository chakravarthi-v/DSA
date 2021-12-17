// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int sumS=0,len=str.size(),base=0;
    	for(int i=0;i<len;i++){
    	    int a=(str[i]-'0');
    	    if(a>=0&& a<=9){
    	        base=base*10+a;
    	    }
    	    else{
    	        sumS+=base;
    	        base=0;
    	    }
    	}
    	return sumS+base;
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends