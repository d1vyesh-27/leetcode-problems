class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            if(i>0) nums[i] += nums[i-1];
            if (mpp.count(nums[i]-k)) ans+=mpp[nums[i]-k];
            mpp[nums[i]]++;
        }
        return ans;
    }
};
