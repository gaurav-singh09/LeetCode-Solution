class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi)maxi=nums[i];
        }
        int lo=1;
        int hi=maxi;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                ans=mid;
                hi=mid-1;
            }    
            else lo=mid+1;
        }
        return ans;
    }
};