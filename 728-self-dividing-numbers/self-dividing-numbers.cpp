class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for( int i=left;i<=right;i++){
            int a=i;
            bool selfdividing=true;
            while(a>0){
                int digit= a%10;
                if(digit==0 || i % digit!=0){
                    selfdividing=false;
                    break;
                }
                a/=10;
            }
            if(selfdividing) v.push_back(i);

        }
        return v;
    }
};