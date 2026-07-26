class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();

        int left = 0;
        int right = n-1;

        int mx = 0;

        while(left<right){
            int len = right - left;
            int area = len * min(h[left],h[right]);
            mx = max(mx , area);
            if(h[left]<h[right]){
                left++;
            }else{
                right--;
            }
        }

        return mx;

    }
};
