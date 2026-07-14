class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto num:nums){
            mp[num]++;
        }
        vector<vector<int>>buckets(n+1);
        for(auto& [num,freq]:mp){
            buckets[freq].push_back(num);
        }

        vector<int>ans;
        for(int i=n;i>=0 && ans.size()<k;--i){
            for(int num: buckets[i]){
                ans.push_back(num);
                if(ans.size()==k)break;
            }
        }

        return ans;

    }
};