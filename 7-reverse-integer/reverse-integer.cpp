#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        long long cnt=0;
        while(x!=0){
            cnt=(10*cnt)+(x%10);
            x/=10;
            if(cnt>INT_MAX || cnt<INT_MIN) return 0;
        }
        return cnt;
        
        
    }
};