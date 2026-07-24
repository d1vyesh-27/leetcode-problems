class Solution {
public:
    int timeTaken(vector<int>& weights, int k){
        int countDays = 1;
        int val = k;
        for (int i=0;i<weights.size();i++){
            if (val >= weights[i]) {
                val -= weights[i];
            } else {
                countDays++;
                val = k - weights[i];
            }
        }
        return countDays;
    }

    int bs(vector<int>& weights, int low, int high, int days){
        if (low > high) return low;
        int mid = low + (high-low)/2;
        int t = timeTaken(weights,mid);
        if (t<=days) return bs(weights,low,mid-1,days);
        else return bs(weights,mid+1,high,days);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxi = 0,sum = 0;
        for(int i=0;i<n;i++){
            if(weights[i]>maxi) maxi = weights[i];
        }
        for (int x : weights) sum += x;
        return bs(weights,maxi,sum,days);
    }
};
