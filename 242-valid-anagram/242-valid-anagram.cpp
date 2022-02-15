class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1=s.length(),len2=t.length();
        if(len1!=len2)return false;
        unordered_map<char,int> st;
        for(int i=0;i<len1;i++){
          st[s[i]]++;
            
        }
        for(int i=0;i<len1;i++){
         
            st[t[i]]--;
            if(st[t[i]]==0){st.erase(t[i]);}
        }
        
        //for(auto x:st){cout<<x.first<<" ";}
        //cout<<st.size()<<" ";
        return (st.size()==0)?true:false;
    }
};