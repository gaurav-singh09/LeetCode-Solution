class Solution {
public:
    int reverse(int x) {
        long long cnt=0;
        
        while(x!=0){
            cnt= cnt*10+x%10;

            x=x/10;
           
            if(cnt>INT_MAX || cnt<INT_MIN) return 0;
        }
        
        return (int)cnt;
         
    }
};