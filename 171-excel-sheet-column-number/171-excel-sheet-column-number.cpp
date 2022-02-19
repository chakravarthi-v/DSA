class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len=columnTitle.length();
        int pows=pow(26,len-1);
        int sum=0;
        for(int i=0;i<len;i++){
           
            sum+=(pows*(columnTitle[i]-64));
            pows=pows/26;
        }
        return sum;
    }
};