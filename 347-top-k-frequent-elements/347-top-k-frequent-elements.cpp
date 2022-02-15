class Solution {
public:
    static bool comp(pair<int,int>& a,pair<int,int>& b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> res;
        vector<pair<int,int>> res1;
        vector<int> out;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        for(auto x:res)res1.push_back({x.first,x.second});
        sort(res1.begin(),res1.end(),comp);
        for(int i=0;i<k;i++){
         out.push_back(res1[i].first);   
        }
        return out;
    }
};