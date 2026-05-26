class Solution {
public:
    int firstpos(vector<int>& nums, int x){
        int lo=0; int hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(x==nums[mid]){
                ans=mid;
                hi=mid-1;
            }
            else if( nums[mid]<x)lo=mid+1;
            else hi=mid-1;
        }
        return ans;
    }
    int secondpos(vector<int>& nums, int x){
        int lo=0; int hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(x==nums[mid]){
                ans=mid;
                lo=mid+1;
            }
            else if( nums[mid]<x)lo=mid+1;
            else hi=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int x) {
        
        return {firstpos(nums,x),secondpos(nums,x)};
    }
};