class Solution {
public:
    bool checkValidString(string s) {
        int lo=0,hi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                lo+=1;
                hi+=1;
            }
            else if(s[i]==')'){
                lo-=1;
                hi-=1;
            }
            else{
                lo-=1;
                hi+=1;
            }
            lo=max(lo,0);
            if(hi<0) return false;
        }
        if(lo==0) return true;
        return false;
    }
};