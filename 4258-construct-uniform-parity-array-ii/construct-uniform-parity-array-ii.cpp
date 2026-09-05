class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums1[i]<mini) mini=nums1[i];
        }
        if (mini%2==1) return true;
        if(mini%2==0){
            for(int i=0;i<n;i++){
                if(nums1[i]%2==1) return false;
            }
        }
        
        return true;
    }
};