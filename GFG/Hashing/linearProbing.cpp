#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> res(hashSize,-1);
        for(int i=0;i<sizeOfArray;i++){
            int a=arr[i]%hashSize;
            if(res[a]==-1){
                res[a]=arr[i];
            }
            else{
                int j=0;
                while(res[a]!=-1&&j<=hashSize){
                    if(res[a]==arr[i]){
                        break;
                    }
                    a=(a+1)%hashSize;
                    j++;
                }
                if(res[a]==-1){
                    res[a]=arr[i];
                }
            }
        }
        return res;
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends