class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.length();
        int m = version2.length();
        int l=0,r=0;

        while(l<n || r<m){
            int num1=0,num2=0;
            while(l<n && version1[l]!='.'){
                num1 = num1 * 10 + (version1[l] - '0');
                l++;
            }
            while(r<m && version2[r]!='.'){
                num2 = num2 * 10 + (version2[r] - '0');
                r++;
            }
            if(num1>num2) return 1;
            else if (num1<num2) return -1;

            if(l<n) l++;
            if(r<m) r++;
        }
        return 0;
    }
};
