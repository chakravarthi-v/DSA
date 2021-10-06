#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
        int xora=0;
        //finding xor of all the elements in an array
        for(int x:nums){
            xora^=x;
        }
        //find the rightmost setbit of the arry
        int leftSetBit=xora & -xora;
        //dividing the array according to wheter a aprticualr set bit is present or not
        int a=0,b=0;
        for(int x:nums){
            if(x&leftSetBit){
                a=a^x;
            }
            else{
                b=b^x;
            }
        }
        vector<int> arr(2,0);
       arr[0]=min(a,b);
       arr[1]=max(a,b);
        return arr;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends