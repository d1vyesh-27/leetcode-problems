class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        int n = p.size();
        int m = s.size();
        if (n > m) return ans;

        for (int i=0;i<n;i++){
            arr1[p[i]-'a']++;
        }
        
        int l=0, r=n-1;
        for (int i=0;i<=r-l;i++){
            arr2[s[i]-'a']++;
        }

        while(true){
            if (arr2==arr1) ans.push_back(l);    
            if (r == m - 1) break;
            arr2[s[l]-'a']--;
            l++;r++;
            arr2[s[r]-'a']++;
        }
        return ans;
    }
};
