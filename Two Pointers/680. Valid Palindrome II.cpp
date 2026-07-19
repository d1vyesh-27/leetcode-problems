class Solution {
public:
    bool validPalindrome(string s) {
        int count1 = 0;
        int n = s.size();
        int l=0,r=n-1;

        while(l<r){
            if(s[l]==s[r]){
                l++;r--;
            }
            else{
                if(count1>0) return false;
                count1++;
                int x=l,y=r;
                r--;
                while(l<r){
                    if(s[l]==s[r]){
                        l++;r--;
                    }
                    else break;
                }
                if(l>=r) return true;
                l=x+1;r=y;
                while(l<r){
                    if(s[l]==s[r]){
                        l++;r--;
                    }
                    else return false;
                }
            }
        }
        return true;
    }
};
