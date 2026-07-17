class Solution {
public:
    bool isPalindrome(string s) {
        string s2 ="";
        for(int i=0;i<s.size();i++){
            if (int(s[i])>=97 && int(s[i])<=122) s2+=s[i];
            else if (int(s[i])>=65 && int(s[i])<=90) s2+= char(int(s[i])+32);
            else if (s[i] >= '0' && s[i] <= '9') s2 += s[i];
        }
        int l = 0,r=s2.size()-1;
        while(l<r){
            if(s2[l]==s2[r]){
                l++;r--;
            }
            else return false;
        }
        return true;
    }
};
