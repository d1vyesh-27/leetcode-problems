class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l=0,r=n-1;
        int amt = 0;
        while(l<r){
            amt = max(amt,(r-l)*min(height[l],height[r]));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return amt;
    }
};
