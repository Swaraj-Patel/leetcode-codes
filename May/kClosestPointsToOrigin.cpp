class compare{
    public:
    bool operator ()( vector<int>&p1, vector<int>&p2){
        return ((p1[0] * p1[0] + p1[1] * p1[1]) < (p2[0] * p2[0] + p2[1] * p2[1]));
    }
};
class Solution {
    
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(),points.end(),compare());
        vector<vector<int>>result;
        for(int i=0;i<K;i++){
            result.push_back(points[i]);
            
        }
        return result;
        
        
    }
};