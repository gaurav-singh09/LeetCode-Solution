class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int lo=i+1;
            int hi=n-1;
            while(lo<hi){
                int sum=nums[i]+nums[lo]+nums[hi];
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                if(sum==target) return sum;
                if(sum<target)lo++;
                else hi--;
            }
        }
        return closest;
    }
};