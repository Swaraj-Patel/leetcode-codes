class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1));
        
        int n=coins.size();
        for(int i=0 ;i <= coins.size() ;i++)
            dp[i][0]=1;
        for(int j=1; j<=amount; j++)
            dp[0][j]=0;
        
        for(int i=1;i <= coins.size();i++){
            for(int j=1; j<= amount; j++){
                if(j >= coins[i-1])
                    dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
                
                else
                    dp[i][j] = dp[i-1][j];
                    
            }
        }
        return dp[n][amount];
    }
};