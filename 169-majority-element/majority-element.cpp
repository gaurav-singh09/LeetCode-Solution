class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=0;
        int cnt=0;
        for(int num:nums){
            if(cnt==0) x=num;
            if(num==x)cnt++;
            else cnt--;
        }
        return x;
    }
};