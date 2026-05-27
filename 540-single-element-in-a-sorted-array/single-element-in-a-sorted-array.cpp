class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if(nums.size()==1 || nums[0]!=nums[1] ) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        int lo=1;
        int hi=nums.size()-2;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 != 0 && nums[mid] == nums[mid - 1])) {
                lo = mid + 1;
            }
            else hi=mid-1;

        }
        return -1;
    }
};