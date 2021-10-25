#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = { 1000, 11, 445,1, 330, 3000 };
     int max=arr[0],min=arr[0];
     for(int i=1;i<6;i++){
         if(min>arr[i]){
             min=arr[i];
         }
         if(max<arr[i]){
             max=arr[i];
         }
     }
     cout<<max<<min;    
     return 0;
}