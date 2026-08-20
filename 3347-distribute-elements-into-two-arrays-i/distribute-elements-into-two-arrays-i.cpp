class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        int j=0;
        int k=0;
        for(int i=2;i<n;i++){
            if(v1[j]>v2[k]){
                // v1[++j]=nums[i];
                v1.push_back(nums[i]);
                j++;
            }

            else{
                // v2[++k]=nums[i];
                v2.push_back(nums[i]);
                k++;
            }
        }
        int m=v2.size();
        for(int i=0;i<m;i++){
            v1.push_back(v2[i]);
        }
        return v1;
    }
};