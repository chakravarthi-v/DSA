class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int arr[46]={0};
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0,num=i;
            while(num>0){
                sum+=(num%10);
                num=num/10;
            }
            arr[sum]++;
        }
        return *max_element(arr,arr+46);
    }
};