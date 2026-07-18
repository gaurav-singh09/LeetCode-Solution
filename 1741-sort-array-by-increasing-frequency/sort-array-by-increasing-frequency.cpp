class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto x:mp){
            pq.push({x.second,-x.first});
        }
        vector<int>ans;
        while(pq.size()>0){
            auto ele=pq.top();
            pq.pop();
            int freq=ele.first;
            int val=-ele .second;
            for(int i=0;i<freq;i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};