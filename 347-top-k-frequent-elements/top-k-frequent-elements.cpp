class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // typedef pair<int,int>pi;we can use this also 
        unordered_map<int,int>mp;
        //map pair <ele,freq>
        for(int ele: nums){
            mp[ele]++;
        }
        //heap pair is<fre,ele>
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto x:mp){
            int ele=x.first,freq=x.second;
            pair<int,int>p={freq,ele};
            pq.push(p);
            //pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;

    }
};