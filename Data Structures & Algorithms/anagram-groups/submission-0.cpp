class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       if(strs.size()<1){
            return {{}};
       } 
       vector<vector<string>> grp;
       map<string, vector<string>> mp;
       for(auto s : strs){
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(s);
       }
       for(auto &it : mp){
         grp.push_back(it.second);
       }
       return grp;
    }
};
