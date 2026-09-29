class Solution:
    def trap(self, height: List[int]) -> int:
        water = 0
        left = 0
        right = len(height)-1
        leftMx = height[left]
        rightMx = height[right]

        while left < right:
            if leftMx < rightMx:
                left += 1
                leftMx = max(height[left], leftMx)
                water += (leftMx - height[left])
            else:
                right -= 1
                rightMx = max(height[right], rightMx)
                water += (rightMx - height[right])
        return water