class Solution {
public:
    string countAlfa(string x){
        map<char, int> mp;
        for(int i=0;i<x.size();i++){
            mp[x[i]]++;
        }
        string counts="";
        for(auto it : mp){
            counts+=it.first;
            counts+=to_string(it.second);
        }
        return counts;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       if(strs.size()<1){
            return {{}};
       } 
       vector<vector<string>> grp;
       unordered_map<string , vector<string> > mp;
       for(auto x : strs){
            mp[countAlfa(x)].push_back(x);
       }
       for(auto it : mp){
            grp.push_back(it.second);
       }
       return grp;
    }
};
