class Solution {
public:
    int abs(int a,int b){
        if(a<b) return b-a;
        else return a-b;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>max_heap;
        for(int i=0;i<arr.size();i++){
            max_heap.push({abs(x,arr[i]),arr[i]});
            if(max_heap.size()>k) max_heap.pop();
        }
        vector<int>ans;
        while(max_heap.size()>0){
            int nu=max_heap.top().second;
            ans.push_back(nu);
            max_heap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};