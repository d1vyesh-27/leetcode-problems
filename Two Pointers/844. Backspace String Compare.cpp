class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i=n-1,j=m-1;
        int count1=0;
        while(i>=0 || j>=0){
            int count1 = 0;
            while(i>=0 && (s[i]=='#' || count1>0)){
                if(s[i]=='#') count1++;
                else count1--;
                i--;
            }
            
            int count2 = 0;
            while(j>=0 && (t[j]=='#' || count2>0)){
                if(t[j]=='#') count2++;
                else count2--;
                j--;
            }

            if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) return false;
            }
            else if (i >= 0 || j >= 0) {
                return false;
            }

            i--;
            j--;
        }
        return true;
    }
};
