class Solution {
public:
    int r(int n){
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int left=0;left<i;left++){
                int right=i-1-left;
                dp[i]+=dp[left]*dp[right];
            }
        }
        return dp[n];
    }
    int numTrees(int n) {
        return r(n);
    }
};