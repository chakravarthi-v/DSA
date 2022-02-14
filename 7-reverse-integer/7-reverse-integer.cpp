class Solution {
public:
    int reverse(int x) {
        
        if(x==0)return 0;
        int sign=x/abs(x);
        int num=0,y=abs(x);
        while(y>0){
            if(num>INT_MAX/10||num<INT_MIN/10)return 0;
            num=num*10+y%10;
            y=y/10;
        }
        num*=sign;
        return num;
    }
};