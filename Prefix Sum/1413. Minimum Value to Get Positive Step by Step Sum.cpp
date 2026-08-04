class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = nums[0];
        for (int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
            mini = min(mini,nums[i]);
        }
        if(1-mini<=0) return 1;
        return 1-mini;
    }
};
