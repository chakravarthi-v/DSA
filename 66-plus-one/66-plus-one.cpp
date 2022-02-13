class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int len=digits.size()-1;
        int carry=1;
        while(len>=0){
            int val=digits[len]+carry;
            if(val>9){
                carry=val/10;
                val=val%10;
            }
            else{
                carry=0;
            }
            res.push_back(val);
            len--;
            
        }
        if(carry!=0)res.push_back(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};