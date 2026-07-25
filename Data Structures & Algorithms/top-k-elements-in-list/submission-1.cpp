class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        vector<pair<int,int>> prs;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            prs.push_back({x.second, x.first});
        }
        sort(prs.begin(),prs.end(),greater<pair<int,int>>());
        for(int i =0;i<k;i++){
            ans.push_back(prs[i].second);
        }
        return ans;
    }
};
