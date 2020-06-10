class Solution {
public:
//     int findMaxLength(vector<int>& nums) {
//         map<int,int>mp;
//         int max_length=0;
//         int current_length=0;
//         int sum=0;
//         if(nums.size()==1)
//             return 0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0)
//                 sum--;
//             else
//                 sum++;
            
//             if(mp.find(sum)!=mp.end()){
                
// //                 if(sum==0)
// //                     current_length=i+1;
// //                 else
//                     current_length=i-mp[sum];
//             }
//             else{
                
//                 mp[sum]=i;
//             }
//             if(sum==0)
//                 current_length=i+1;
//             max_length=max(current_length,max_length);
//         }
//         return max_length;
            
//     }
// };
    
    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        int max_length=0;
        int current_length=0;
        int sum=0;
        if(nums.size()==1)
            return 0;
        
        for(int i=0;i<nums.size();i++){
            
            sum=nums[i]==0?sum-1:sum+1;
            
            mp.find(sum)!=mp.end()?current_length=i-mp[sum]:mp[sum]=i;
            
            if(sum==0)
                current_length=i+1;
            
            max_length=max(current_length,max_length);
        }
        return max_length;
            
    }
};