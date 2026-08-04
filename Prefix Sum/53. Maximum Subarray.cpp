class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxo=nums[0];
        for(int i=1;i<n;i++){
            if (nums[i]+nums[i-1]>nums[i]){
                nums[i]+=nums[i-1];
            }
            maxo=max(maxo,nums[i]);
        }
        return maxo;
    }
};
