class Solution {
public:
    int numPrimeArrangements(int n) {
        if(n==1){
            return 1;
        }
        vector<bool> arr(n+1,true);
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<=n;i++){
            // if(arr[i]){
            //     for(int j=2*i;j<=n;j=j+i){
            //         arr[i]=false;
            //     }
            // }
            for(int j = i*i; j<=n; j+=i){
            if(arr[j]){
                arr[j] = false;
            }
        }
        }
        int prime=0;
        for(int i=2;i<arr.size();i++){
            if(arr[i]){
                prime++;
            }
        }
        
        int comp=n-prime,res=1;
        
        int a=1000000007;
        long long int compS=1;
        for(int i=comp;i>1;i--){
            compS=compS*i%a;
            compS%a;
        }
        for(int j=prime;j>1;j--){
            compS=compS*j%a;
            compS%a;
        }
        
        return compS;
    }
};