class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int to_return=0;
        int sum=INT_MAX;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int add=nums[i]+nums[j]+nums[k];
                    int curr_diff= abs(target-add);
                    if(curr_diff<sum){
                        sum=curr_diff;
                        to_return=add;
                    }
                    
                }
            }
        }
        return to_return;
    }
};