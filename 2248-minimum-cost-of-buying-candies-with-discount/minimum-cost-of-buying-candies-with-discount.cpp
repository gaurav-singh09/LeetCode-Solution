class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        // if(n==2) return  cost[0]+cost[1];
        sort(cost.begin(),cost.end());
        int sum=0;
        for(int i=n-1;i>=0;i-=3){
            sum+=cost[i];
            if(i-1>=0) sum+=cost[i-1];
        }
        return sum;
        
    }
};