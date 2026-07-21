class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mpp;
        vector<int> ans;
        int n = s.size();
        if (n==1) return {1};
        
        int x = 0;
        for(int i=0;i<n;i++) mpp[s[i]]=i;
        int l=0,r = mpp[s[l]];

        while(r<n){
            if(l==r){
                ans.push_back(r-x+1);
                x = r+1;
                l++;
                if (l == n) break;
                r = mpp[s[l]];
                continue;
            }
            r = max(r, mpp[s[l]]);
            l++;
        }
        return ans;
    }
};
