class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int area=0;
        int h=height[0];
        while(i<j){
            h=min(height[i],height[j]);
            area=max(area,(j-i)*h);
            if(height[i]<height[j])i++;
            else j--;
        }
        return area;
        
    }
};