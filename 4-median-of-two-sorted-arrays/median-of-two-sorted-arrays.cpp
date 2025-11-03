class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int m=nums1.size();
        int n=nums2.size();
        int mx=max(m,n);
        int i=0;
        int j=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j])v.push_back(nums1[i++]);
            else v.push_back(nums2[j++]);

        }
        while (i < nums1.size()) v.push_back(nums1[i++]);
        while (j < nums2.size()) v.push_back(nums2[j++]);


        if(v.size()%2!=0)return (float)(v[((1+v.size())/2)-1]);
        else return ((double)(v[(v.size()/2)-1]+v[(v.size()/2)])/2);
    }
};