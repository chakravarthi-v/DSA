#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeSort(vector<int>& A,vector<int>& B){
        int n=A.size(),m=B.size();
        vector<int> arr;
        int i=0,j=0,index=0;
        while(i<n&&j<m){
            if(A[i]<=B[j]){
                arr.push_back(A[i]);
                i++;
            }
            else{
                arr.push_back(B[j]);
                j++;
            }
        }
        while(i<n){
          arr.push_back(A[i]);
                i++;
        }
        while(j<m){
            arr.push_back(B[j]);
                j++;
        }
        return arr;
        
    }
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        vector<int> ar1=mergeSort(B,C);
        vector<int> arr=mergeSort(A,ar1);
        return arr;
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends