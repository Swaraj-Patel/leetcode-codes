class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>>graph(N,vector<int>());
        for(auto i:dislikes){
            graph[i[0]-1].push_back(i[1]-1);
            graph[i[1]-1].push_back(i[0]-1);
        }
        int n=graph.size();
        vector<int> color(n,-1);
        vector<int> visited(n,0);
        
        bool ans=true;
        
        
        for(int i=0;i<n;i++){
            if(!visited[i])
                DFS(graph,i,-1,color,ans,visited);
        }
        return ans;
        
        
    }
    
    void DFS(vector<vector<int>>&graph,int u,int p,vector<int> &color,bool& ans,vector<int> &visited)
    {
        if(p==-1)
            color[u]=1;
        else{
            if(color[p]==1)
                color[u]=2;
            else
                color[u]=1;
        }
            visited[u]=1;
        for(auto i:graph[u]){
           
            if(!visited[i])
                DFS(graph,i,u,color,ans,visited);
            if(color[u]==color[i])
                ans=false;
        }
        
        
        
       
    }
};