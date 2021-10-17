class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minS=prices[0];
        int diff=0;
        for(int i=1;i<prices.size();i++){
            diff=max(diff,prices[i]-minS);
            minS=min(minS,prices[i]);
        }
        return diff;
    }
};