class Solution {
public:
    long long timeTaken(vector<int>& piles, int k){
        long long countH = 0;
        for (int i=0;i<piles.size();i++){
            countH += piles[i]/k + (piles[i]%k!=0);
        }
        return countH;
    }

    int bs(vector<int>& piles, int low, int high, int h){
        if (low > high) return low;
        int mid = low + (high-low)/2;
        long long t = timeTaken(piles,mid);
        if (t<=h) return bs(piles,low,mid-1,h);
        else return bs(piles,mid+1,high,h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(piles[i]>maxi) maxi = piles[i];
        }
        return bs(piles,1,maxi,h);
    }
};
