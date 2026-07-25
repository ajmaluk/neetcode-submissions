class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 0;
        if(nums.size()<1){
            return 0;
        }
        unordered_set<int> st(nums.begin(),nums.end());
        for(auto x : st){
            if(st.find(x-1)==st.end()){
                int curr = x;
                int len = 1;
                while(st.find(curr+1)!=st.end()){
                    len++;
                    curr++;
                }
                count = max(count,len);
            }
        }
        return count;
    }
};
