class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int ans=1;
        int lo=1;
        int hi=x;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(mid<=x/mid) {
                ans=mid;
                lo=mid+1;
            }       
            else hi=mid-1;
        }
        return ans;
    }
};