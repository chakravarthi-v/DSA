#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int len=s.length();
		    int count=pow(2,len);
		    vector<string> res;
		   
		    for(int i=0;i<count;i++){
		        string a="";
		        for(int j=0;j<len;j++){
		            if(i&(1<<j)){
		                a+=s[j];
		            }
		        }
		        if(a.length()>0){
		            res.push_back(a);
		        }
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends