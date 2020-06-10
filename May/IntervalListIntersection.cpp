class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>result;
        int i=0;
        int j=0;
        while(i < A.size() and j < B.size()){
            if(A[i][1]<B[j][0])
                i++;
            else if(B[j][1]<A[i][0])
                j++;
            else{
                int start=max(A[i][0],B[j][0]);
                int end=min(A[i][1],B[j][1]);
                if(A[i][1]<B[j][1])
                    i++;
                else if(B[j][1]<=A[i][1])
                    j++;
                result.push_back({start,end});
                
            }
        }
        return result;
    }
};