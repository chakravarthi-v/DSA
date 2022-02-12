class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")return 0;
        int second=0;
        int len1=haystack.length(),len2=needle.length();
        for(int i=0;i<=len1-len2;i++){
            if(haystack[i]==needle[second]){
                int st=i;
               
                while(second<len2){
                    if(haystack[st]!=needle[second]){
                        break;
                    }
                    second++;st++;
                }
                
             
                if(second==len2){
                    return i;
                }
                second=0;
                
            }
        }
        return -1;
    }
};