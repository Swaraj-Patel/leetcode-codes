class Solution {
public:
//     bool isPerfectSquare(int num) {   //complexity=O(sqrt(n)) 
        
//         for(long long int i=1;i*i<=num;i++){
            
//             if(i*i== num)
//                 return true;
//         }
//         return false;
        
        
        
   // }
    
    
    
    bool isPerfectSquare(int num) { // complexity =O(logn)
        int low=1,high=num;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            long long int square=mid*mid;
            if(square==num)
                return true;
            if(square<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
        
    }
};