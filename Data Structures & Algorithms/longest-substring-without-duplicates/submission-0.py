class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}
        left = 0
        ans = 0
        for i in range(len(s)):
            mp[s[i]] = mp.get(s[i],0) + 1
            while mp[s[i]]>1:
                mp[s[left]]-=1
                left+=1
            
            current_len = i-left+1
            ans = max(ans,current_len)

        return ans
            
