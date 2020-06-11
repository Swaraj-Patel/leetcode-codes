class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0=0;
        int p2=nums.size()-1;
        int i=0;
        
        while(i <= p2){
            if( nums[i] == 2){
                swap( nums[i],nums[p2]);
                p2--;          //// we don't know if 2 is swapped with 0 or 1 so we dont advance i;
            }
            else if( nums[i] == 0){
                swap(nums[i],nums[p0]);
                p0++;
                i++;
            }
            else i++;
        }
    }
};