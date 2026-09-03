class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto ele:arr){
            mp[ele]++;
        }
        vector<int>v;
        for(auto ele:mp){
            v.push_back(ele.second);
        }
        sort(v.begin(),v.end());
        int n=v.size();
         for(int f : v) {
            if(k >= f) {
                k -= f;
                n--;
            }
            else {
                break;
            }
        }
        return n;
    }
};