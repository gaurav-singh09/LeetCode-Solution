class Solution {
public:
    int rev(int x){
        int r=0;
        while(x>0){
            r*=10;
            r+=x%10;
            x/=10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        long long cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
            
        }
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                cnt=cnt%1000000007;
                cnt+=mp[nums[i]];
                mp[nums[i]]++;
            }
            else mp[nums[i]]++;
        }

        return cnt%1000000007;

    }
};