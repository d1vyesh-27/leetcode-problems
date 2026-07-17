class Solution {
public:
    int removeElement(vector<int>& s, int val) {
        int n = s.size();
        int l=0,r=n-1;

        while(l<r){
            while(s[l]!=val && l<r) l++;
            while(s[r]==val && l<r) r--;
            swap(s[l],s[r]);
            l++;r--;
        }
        int i=0;
        while (i < n && s[i] != val) i++;
        return i;
    }
};
