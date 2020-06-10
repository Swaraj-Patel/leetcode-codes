class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int localmax=0;
        int globalmax=INT_MIN;
        int localmin=0;
        int globalmin=INT_MAX;
        int total=0;
        for(auto i:A){
            total+=i;
            localmax=max(i,localmax+i);
            globalmax=max(globalmax,localmax);
            localmin=min(i,localmin+i);
            globalmin=min(globalmin,localmin);
            
        }
        if(globalmax>0)
            return max(globalmax,total-globalmin);
        return globalmax;
    }
};