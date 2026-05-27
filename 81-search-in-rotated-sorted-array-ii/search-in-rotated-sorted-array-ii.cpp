class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_set<int>st(nums.begin(),nums.end());
        if(st.count(target)) return true;
        return false;
    }
};