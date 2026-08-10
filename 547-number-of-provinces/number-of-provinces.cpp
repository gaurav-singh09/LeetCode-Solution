class Solution {
private:
    void dfs(int node,vector<vector<int>>& isConnected,vector<int>& vis){
        vis[node]=1;
        for(int j=0;j<isConnected.size();j++){
            if(isConnected[node][j]==1 && !vis[j]){
                dfs(j,isConnected,vis);
            }    
        }
    }
public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<int>vis(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
        }
        return cnt;
        
    }
};