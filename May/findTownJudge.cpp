class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        if(N==1)
            return 1;
        
        int in_degree[N+1];
        int out_degree[N+1];
        memset(in_degree,0,sizeof in_degree);
         memset(out_degree,0,sizeof out_degree);
        for(auto i:trust){
            in_degree[i[1]]++;
            out_degree[i[0]]++;
        }
        for(int i=1;i<=N;i++){
            if(in_degree[i]==N-1 and out_degree[i]==0)
                return i;
        }
        return -1;
    }      
        
};