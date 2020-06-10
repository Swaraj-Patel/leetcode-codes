class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        if(n==1)
            return n;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(mid==low and low==0 )
                return nums[mid];
            

            if(nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1])
                return nums[mid];
            else if(nums[mid]==nums[mid-1] and mid%2==0)
                    high=mid-1;
                
            else if(nums[mid]==nums[mid-1] and mid%2!=0)
                    low=mid+1;
            
            else if(nums[mid]==nums[mid+1] and mid%2==0)
                    low=mid+1;
                
            else if(nums[mid]==nums[mid+1] and mid%2!=0)
                    high=mid-1;
            
                    
                        
            
         }
        return 0;
     }
        
    
};