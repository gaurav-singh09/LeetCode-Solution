class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftSum=0;
        int rightSum=0;
        for(int num : nums) rightSum+=num;
        vector<int> ans;
        for(int num : nums){
            rightSum-= num;
            ans.push_back(abs(leftSum-rightSum));
            leftSum+=num;

        }
        return ans;
    }
};