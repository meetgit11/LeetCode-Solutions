class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //brute force solution 
        //int ans[n][n];
        //vector<vector<int>> ans(n,vector<int>(n));
        //optimal solution
        //transpose the original matrix
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse the transposed matrix
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};