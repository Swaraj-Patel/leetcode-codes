class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& points) {
       // equation of line
        bool flag=false;
        cout<<points.size();
        if(points.size()==2)
            return true;
        
        
       
       
        int x=points[1][0]-points[0][0];
        int y=points[1][1]-points[0][1];
        if(x==0)
            return false;
        float slope=y/x;
        
        int intercept=points[0][1]-(slope*points[0][0]);
        
        
        for(int i=2;i<points.size();i++){
            if(points[i][1]== (slope*points[i][0] + intercept))
                flag=true;
            else{
                flag=false;
                break;
            }
        }
        return flag;
       
    }    
};