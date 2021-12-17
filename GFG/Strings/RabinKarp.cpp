//Initial Template for C++

/* Following program is a C implementation of 
Rabin Karp. Algorithm given in the CLRS book */
#include<bits/stdc++.h>

using namespace std;

bool search(string, string, int);


 // } Driver Code Ends
//User function Template for C++

// d is the number of characters in the input alphabet 
#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	// Your code here
	int h=1,len1=pat.length(),len2=txt.length();
	for(int i=1;i<len1;i++){
	    h=(h*d)%q;
	}
	int p=0,s=0,j;
	for(int i=0;i<len1;i++){
	    p=(p*d+pat[i])%q;
	    s=(s*d+txt[i])%q;
	}
	for(int i=0;i<=(len2-len1);i++){
	    if(p==s){
	        
	        for(j=0;j<len1;j++){
	            if(pat[j]!=txt[i+j])  break;
	        }
	        if(j==len1){return true;}
	    }
	    if(i<len2-len1){
	        s=(d*(s-txt[i]*h)+txt[i+len1])%q;
	        if(s<0) s=s+q;
	    }
	}
	return false;
} 

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
	    string s, p;
	    cin >> s >> p;
	    int q = 101; // A prime number 
	    if(search(p, s, q)) cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0; 
} 
  // } Driver Code Ends