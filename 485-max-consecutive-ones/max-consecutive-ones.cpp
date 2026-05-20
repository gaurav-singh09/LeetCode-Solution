class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                cnt++;
                if(cnt>n)n=cnt;
            }    
            else if(nums[i]!=1)cnt=0;
        }
        return n;
    }
};