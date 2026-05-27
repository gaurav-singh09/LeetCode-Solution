class Solution {
public:
    int findMin(vector<int>& nums) {
        int cnt=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<cnt) cnt=nums[i];
        }
        return cnt;
    }
};