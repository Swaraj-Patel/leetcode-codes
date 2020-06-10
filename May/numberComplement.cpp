class Solution {
public:
    int findComplement(int num) {
//         vector<int>ans;
        
//         while(num>=2){
//             ans.push_back(num%2);
//             num=num/2;
//         }
//         ans.push_back(num);
//          //reverse(ans.begin(),ans.end());
//         //for(auto i:ans)
//             //cout<<i;
        
//         for(auto &i:ans){
//             if(i==0)
//                 i=1;
//             else
//                 i=0;
//         }
//         for(auto i:ans)
//             cout<<i;
//         int index=0,sum=0;
//         for(auto i:ans){
//             sum=sum+(i*pow(2,index));
//             index++;
//         }
        
//     return sum;
        //return 0;
        
    int n=log2(num)+1;    
    for(int i=0;i<n;i++)
        num=num^(1<<(i));
    
    return num;
    }
};