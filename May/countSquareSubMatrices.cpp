class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1){
                    if(i!=0 and j!=0){
                        matrix[i][j]=1+ min({matrix[i-1][j], matrix[i-1][j-1], matrix[i][j-1]});
                        count += matrix[i][j];
                    }
                    else if(i==0)
                        count++;
                    else if(j==0)   
                        count++;
                }
            }
        }
        return count;
        
    }
};