class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxSum=0,count=0,i=0,j=0;
        while(i<s.length()){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                count++;
                maxSum=max(maxSum,count);
                i++;
            }
            else{
                st.erase(s[j]);
                count--;
                j++;
            }
        }
        return maxSum;
     
    }
};