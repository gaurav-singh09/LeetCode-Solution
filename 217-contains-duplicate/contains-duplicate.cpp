class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j])return true;
               
        //     }
        // }
        // return false;
        // stack<int>st;
        // sort(nums.begin(),nums.end());
        // st.push(nums[0]);
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==st.top()){
        //         return true;
        //         st.push(nums[i]);
        //         // else continue;
        //     }
        // }
        // return false;

        unordered_set<int> st;
        for(int x : nums){
            if(st.count(x)) return true;
            st.insert(x);
        }
        return false;

    }
};