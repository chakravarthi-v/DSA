class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        //if(strs[0]=="")return "";
        int len=strs[0].size();
        for(int i=0;i<len;i++){
            bool check=true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    check=false;
                    break;
                }
            }
            if(!check)break;
            s+=strs[0][i];
        }
        return s;
    }
};