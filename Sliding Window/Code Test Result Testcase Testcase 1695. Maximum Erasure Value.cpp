class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int l=0,r=0;
        int sum = 0;
        int ans = 0;

        while(r<n){
            if(mpp[nums[r]]>0){
                mpp[nums[l]]--;
                sum -= nums[l];
                l++;
            }
            else{
                mpp[nums[r]]++;
                sum += nums[r];
                ans = max(ans, sum);
                r++;
            }
        }
        return ans;
    }
};
