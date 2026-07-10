class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>cnts;
        for(int x:arr1){
            cnts[x]++;
        }
        vector<int>result;
        for(int x:arr2){
            while(cnts[x]>0){
                result.push_back(x);
                cnts[x]--;
            }
            cnts.erase(x);
        }
        vector<int>remaining;
        for(auto const&[val,cnt]:cnts){
            for(int i=0;i<cnt;i++)
                remaining.push_back(val);
        }
        sort(remaining.begin(),remaining.end());
        result.insert(result.end(),remaining.begin(),remaining.end());

        return result;
    }
};