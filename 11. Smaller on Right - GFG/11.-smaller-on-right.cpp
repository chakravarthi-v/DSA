#include <bits/stdc++.h>
using namespace std;

int smallRight(int arr[],int siz){
    set<int> st;
    int maxS=0;
    for(int i=siz-1;i>=0;i--){
        st.insert(arr[i]);
        int dist=distance(st.begin(),st.find(arr[i]));
        maxS=max(maxS,dist);
    }
    return maxS;
}
int main() {
	//code
	int testC;
	cin>>testC;
	for(int i=0;i<testC;i++){
	    int sizeA;
	    cin>>sizeA;
	    int arr[sizeA];
	    for(int i=0;i<sizeA;i++){
	        
	        cin>>arr[i];
	    }
	       
	    cout<<smallRight(arr,sizeA)<<endl;
	}
	return 0;
}