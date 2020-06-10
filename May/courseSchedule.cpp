class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& graph) {
        
         vector<vector<int>> G(n,vector<int>());
        //initially memory is not allocated or vector<vector<int>> G(n,vector<int>(m,value)); n*m 2d matrix initialised with value="value"
            //vector<int>G[n]
        int visited[n];
        memset(visited,0,sizeof visited);
        bool ans=true;
        for(auto i:graph){
            G[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++){
            if(!visited[i])
                dfs(n,G,i,-1,ans,visited);
        } 
        return ans;
    }  
       
    void dfs(int n,vector<vector<int>>&g ,int u,int p,bool& ans,int visited[])
    {
        visited[u]=1;
        for(auto i:g[u]){
            if(visited[i]==0)
                dfs(n,g,i,u,ans,visited);
            if(visited[i]==1){
                ans=false;
                
            }   
        }
        visited[u]=2;
        
    }
    
   
    
};