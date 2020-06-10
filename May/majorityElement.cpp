class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>h;
        for(auto i:nums){
            h[i]++;
            if(h[i]>nums.size()/2)
                return i;
            
        }
       
        return -1;
        
    }
};