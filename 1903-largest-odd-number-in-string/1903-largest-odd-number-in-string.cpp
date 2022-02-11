class Solution {
public:
    string largestOddNumber(string num) {
        int len=num.length();
        int a=num[len-1];
        while(a%2==0&&len>=0){
            len--;
            if(len>=0)a=num[len];
        }
       
        if(len==-1)return "";
        
        else return num.substr(0,len+1);
    }
};