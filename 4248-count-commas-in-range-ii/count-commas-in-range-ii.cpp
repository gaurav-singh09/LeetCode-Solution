class Solution {
public:
    using ll=long long;
    long long countCommas(long long n) {
        ll ans=0;
        ll base=1000;
        while(base<=n){
            ans+=(n-base+1);
            base*=1000;
        }
        return ans;
    }
};