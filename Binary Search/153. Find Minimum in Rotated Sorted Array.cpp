class Solution {
public:
    int bs(vector<int>& nums, int low, int high){
        if (low>high) return nums[high];
        int mid = low + (high-low)/2;
        if (nums[low] <= nums[mid]){
            if (nums[mid]<=nums[high]) return nums[low];
            else return bs(nums,mid+1,high);
        }
        else {
            return bs(nums,low,mid);
        }
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();
        return bs(nums,0,n-1);
    }
};
