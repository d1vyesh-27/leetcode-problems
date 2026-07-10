class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        int n = s1.size();
        int m = s2.size();
        if (n > m) return false;

        for (int i=0;i<n;i++){
            arr1[s1[i]-'a']++;
        }
        
        int l=0, r=n-1;
        for (int i=0;i<=r-l;i++){
            arr2[s2[i]-'a']++;
        }

        while(true){
            if (arr2==arr1) return true;    
            if (r == m - 1) break;
            arr2[s2[l]-'a']--;
            l++;r++;
            arr2[s2[r]-'a']++;
        }
        return false;
    }
};
