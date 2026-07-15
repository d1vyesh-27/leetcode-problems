class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        int n = nums.size();
        
        int l=0,r=0;
        int prod = 1;
        int count = 0;

        while(r<n){
            prod*=nums[r];
            if(prod<k){
                count = count + 1 + (r-l);
            }
            else{
                while(prod>=k){
                    prod/=nums[l];
                    l++;
                }
                count = count + 1 + (r-l);
            }
            r++;
        }
        return count;
    }
};
