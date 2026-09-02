class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left_max=0;
        int right_max=0;
        int lo=0;
        int hi=n-1;
        int water=0;
        while(lo<hi){
            if(height[lo]<height[hi]){
                left_max=max(left_max,height[lo]);
                water+=left_max-height[lo];
                lo++;
            }
            else {
                right_max=max(right_max,height[hi]);
                water+=right_max-height[hi];
                hi--;
            }
            
        }    
        return water;
        
    }
};