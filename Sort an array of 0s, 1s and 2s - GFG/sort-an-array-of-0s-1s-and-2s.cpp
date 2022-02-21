// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        // coode here 
        int start=-1;
        int low=0,high=n-1;
        while(low<=high){
            if(a[low]==1){
                low++;
            }
            else if(a[low]==0){
                start++;
                swap(a[low],a[start]);
                low++;
            }
            else if(a[low]==2){
                swap(a[low],a[high]);
                high--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends