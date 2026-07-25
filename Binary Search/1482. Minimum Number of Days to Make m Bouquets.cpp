class Solution {
public:
    int check(vector<int>& bloomDay, int day, int k){
        int count = 0;
        int bouq = 0;
        for(int i=0;i<bloomDay.size();i++){
            if (bloomDay[i]<=day){
                count++;
                if (count==k){bouq++;count=0;}
            }
            else count = 0;
        }
        return bouq;
    }

    int bs(vector<int>& bloomDay, int low, int high, int m, int k){
        if (low>high) return low;
        int mid = low + (high-low)/2;
        if (check(bloomDay,mid,k)<m) return bs(bloomDay,mid+1,high,m,k);
        else return bs(bloomDay,low,mid-1,m,k);
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (1LL*m *k>n) return -1;
        int maxi = 0;
        for(int i=0;i<n;i++) if(bloomDay[i]>maxi) maxi = bloomDay[i];
        return bs(bloomDay,1,maxi,m,k);
    }
};
