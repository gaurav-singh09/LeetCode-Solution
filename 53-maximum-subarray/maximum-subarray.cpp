class Solution {
    using ll = long long;
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        ll cur_sum=0;
        ll max_sum=INT_MIN;
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
            max_sum=max(cur_sum,max_sum);
            if(cur_sum<0) cur_sum=0;
        }
        return max_sum;
    }
};