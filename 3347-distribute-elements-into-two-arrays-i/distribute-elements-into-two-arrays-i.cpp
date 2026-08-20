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
        for(int i=0;i<v1.size();i++){
            nums[i]=v1[i];
        }
        int r=0;
        for(int i=v1.size();i<v1.size()+v2.size();i++){
            nums[i]=v2[r++];
        }
        return nums;
    }
};