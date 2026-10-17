class Solution {
public:
    int sum(int n){
       int ans=0;
       while(n>0){
            ans+=n%10;
            n/=10;
       } 
       return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();

        vector<pair<int,int>>v;

        for(int x:nums){
            v.push_back({sum(x),x});
        }
        sort(v.begin(),v.end());
        vector<int> s;
        for(auto &p:v){
            s.push_back(p.second);
        }
        unordered_map<int, int> pos;
        
        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }
        
        int swaps = 0;
        
        for (int i = 0; i < n; i++) {
            if(nums[i] == s[i]) 
                continue;
            int j = pos[s[i]];
            swap(nums[i], nums[j]);
            pos[nums[j]] = j;
            pos[nums[i]] = i;
            swaps++;
        }
        
        return swaps;
    }
};