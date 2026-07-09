class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int cnt=0;
        unordered_set<string> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());

            if(rev==arr[i]) continue;
            if(s.find(rev)!=s.end()){
                cnt++;
                s.erase(arr[i]);
            }
        }
        return cnt;
    }
};