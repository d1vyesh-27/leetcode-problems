class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n==1 || numRows==1) return s;
        string ans = "";
        int skip;
        bool down;

        for(int i=0;i<numRows;i++){
            down = true;
            for(int j=i;j<n;){
                ans+=s[j];
                if(i==0||i==numRows-1){
                    j+= 2*numRows-2;
                }
                else{
                    if(down){
                        j+=2*numRows-2-2*i;
                    }
                    else{
                        j+=2*i;
                    }
                    down = !down;
                }
            }
        }
        return ans;
    }
};
