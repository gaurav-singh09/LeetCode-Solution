class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>pq;
        for(auto ele:arr){//O(nlogn)
            pq.push(ele);
        }
        
        while(pq.size()>1){//O(nlogn)
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            int diff=first-second;
            if(diff!=0) pq.push(diff);
            else continue;
        }
        if(pq.size()==0) return 0;
        else return pq.top();
    }
};