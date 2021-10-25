#include<iostream>
using namespace std;
int main(){
     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
     int n=9;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
     for(auto x:arr){
         cout<<x<<" ";
     }
    return 0;
}