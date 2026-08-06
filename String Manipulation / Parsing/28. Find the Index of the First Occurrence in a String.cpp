class Solution {
public:
    bool check_needle(string &haystack, string &needle, int idx){
        int r=0;
        int n = needle.size();
        int m = haystack.size();
        while(r<n){
            if(haystack[idx]==needle[r]){
                idx++;r++;
            }
            else return false;
        }
        return true;
    }

    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        int l=0;
        while(l<=m-n){
            if(haystack[l]==needle[0]){
                int k = check_needle(haystack,needle,l);
                if (k==true) return l;
            }
            l++;
        }
        return -1;
    }
};
