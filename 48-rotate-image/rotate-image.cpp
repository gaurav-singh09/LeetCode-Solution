class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();//rows
        int n = matrix[0].size();//columns

        vector<vector<int>>t(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m/2;j++){
                swap(matrix[i][j],matrix[i][m-j-1]);

            }
        }
        

        
    }
};