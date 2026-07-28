class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int val = 0;
        for (int i=0;i<gain.size();i++){
            val += gain[i];
            ans = max(val,ans);
        }
        return ans;
    }
};
