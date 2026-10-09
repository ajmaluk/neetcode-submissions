class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        sub = []

        def backTrack(i):
            if i == len(nums):
                res.append(sub.copy())
                return

            sub.append(nums[i])
            backTrack(i + 1)

            sub.pop()
            backTrack(i + 1)
        backTrack(0)
        return res
            