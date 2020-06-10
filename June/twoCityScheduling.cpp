typedef pair<int,int> pi;
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2;
        int cost=0;
        sort(costs.begin(),costs.end(),[](const vector<int> &a, const vector<int> &b){
            return (a[0]-a[1]) < (b[0]-b[1]);
        });
        
        for(int i=0;i < costs.size()/2; i++)
            cost += costs[i][0];
        
        for(int i=costs.size()/2;i < costs.size() ;i++)
            cost += costs[i][1];
        return cost;
    }
};
