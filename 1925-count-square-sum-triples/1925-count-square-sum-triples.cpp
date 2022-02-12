class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int num=(i*i + j*j);
                int sqr=sqrt(num);
                if(sqr*sqr==num&&sqr<=n){
                    count+=2;
                }
            }
        }
        return count;
    }
};