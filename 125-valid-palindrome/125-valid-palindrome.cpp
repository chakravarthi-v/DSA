class Solution {
public:
    bool palindromeUtil(string s){
        int start=0,end=s.length()-1;
        while(start<=end){
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        int len=s.size();
        string pal="";
        for(int i=0;i<len;i++){
            if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)||(s[i]>='0'&&s[i]<='9')){
                if((s[i]>=65&&s[i]<=90)){
                    s[i]+=32;
                }
                pal+=s[i];
            }
        }
        
        return palindromeUtil(pal);
    }
};