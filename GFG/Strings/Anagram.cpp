#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

const int CHAR=256;
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int arr[CHAR]={0};
        int len1=a.length(),len2=b.length();
        if(len1!=len2){
            return false;
        }
        for(int i=0;i<len2;i++){
            arr[a[i]]++;
            arr[b[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]!=0)return false;
        }
        return true;
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends