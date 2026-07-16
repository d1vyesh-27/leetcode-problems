class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        vector<int> arr(26,0);
        int count = 0;
        int ans = 0;
        int l=0,r=k-1;

        for (int i=0;i<k;i++){
            arr[s[i]-'a']++;
        }   

        while(r<n){
            count = arr[0]+arr[4]+arr[8]+arr[14]+arr[20];
            if (count==k) return count;
            ans = max(ans,count);
            arr[s[l]-'a']--;
            l++;r++;
            if (r < n) arr[s[r] - 'a']++;
        }
        return ans;
    }
};
