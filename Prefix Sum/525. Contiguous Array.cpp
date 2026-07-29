class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 0;

        for(int i=0;i<n;i++) if(nums[i]==0) nums[i]=-1;
        int sum = 0;
        int maxLength = 0;
        unordered_map<int,int> mpp;
        mpp[0]=-1;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mpp.count(sum)){
                maxLength = max(maxLength,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
        return maxLength;
    }
};
