class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=0;
        int zeroCount = 0;
        int count = 0;
        int ans = 0;

        while(r<n){
            if(nums[r]==0){
                if(zeroCount==1){
                    ans = max(ans,count);
                    while(nums[l]!=0){
                        l++;
                        count--;
                    }
                    l++;zeroCount--; 
                }
                else {zeroCount++;r++;}
            }
            else{
                count++;
                r++;
            }
        }
        ans = max(ans,count);
        if (ans == n) return n - 1;
        return ans;
    }
};
