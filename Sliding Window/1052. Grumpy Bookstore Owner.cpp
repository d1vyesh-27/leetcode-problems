class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int l=0,r=minutes-1;
        int sum=0;
        int ans = 0;

        for(int i=0;i<minutes;i++) sum+=customers[i];
        for(int i=minutes;i<n;i++) sum+=customers[i]*(1-grumpy[i]);
        ans = max(ans,sum);

        while(r<n-1){
            sum = sum - customers[l] + customers[l]*(1-grumpy[l]);
            l++;r++;
            sum = sum + customers[r] - customers[r]*(1-grumpy[r]);
            ans = max(ans,sum); 
        }
        return ans;
    }
};
