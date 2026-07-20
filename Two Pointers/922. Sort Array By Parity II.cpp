class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return nums;
        int l=0,r=1;

        while(l<n && r<n){
            while(l<n && nums[l]%2==0) l = l+2;
            while(r<n && nums[r]%2==1) r = r+2;

            if(l<n && r<n) swap(nums[l],nums[r]);
        }
        return nums;
    }
};
