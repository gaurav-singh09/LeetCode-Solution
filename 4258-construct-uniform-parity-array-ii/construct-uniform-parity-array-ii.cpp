class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2!=0) return true;
        for(int ele:nums1){
            if(ele%2==1)return false;
        }
        return true;
    }
};