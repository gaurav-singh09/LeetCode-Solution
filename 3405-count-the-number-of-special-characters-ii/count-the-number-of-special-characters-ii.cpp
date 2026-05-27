class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower_case(26,-1);
        vector<int> upper_case(26,-1);
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            if(ch>='a' && ch<='z')lower_case[ch-'a']=i;
            else if(ch>='A'&& ch<='Z'){
                if(upper_case[ch-'A']==-1)upper_case[ch-'A']=i;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(lower_case[i]!=-1 && upper_case[i]!=-1 && lower_case[i]<upper_case[i]) cnt++;
        }
        return cnt;
    }
};