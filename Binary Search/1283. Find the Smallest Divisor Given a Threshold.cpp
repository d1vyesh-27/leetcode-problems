class Solution {
public:
    int sumDiv(vector<int>& nums, int k){
        int val = 0;
        for (int i=0;i<nums.size();i++){
            val += nums[i]/k + (nums[i]%k!=0);
        }
        return val;
    }
    int bs(vector<int>& nums, int low, int high, int threshold){
        if (low>high) return low;
        int mid = low + (high-low)/2;
        int check = sumDiv(nums,mid);
        if(check<=threshold) return bs(nums,low,mid-1,threshold);
        else return bs(nums,mid+1,high,threshold);

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = 0;
        for (int i=0;i<n;i++) if(nums[i]>maxi) maxi = nums[i];
        return bs(nums,1,maxi,threshold);
    }
};
