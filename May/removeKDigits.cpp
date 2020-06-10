class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        int i=0;
        if(num.length()==k)
            return "0";
        int counter=0;
        while(k>0){
            if(num[i]>num[i+1]){
                
                num.erase(num.begin()+i);
                i=i-1;
                k--;
            }
            else    
                i++;
        
            if(i<0)
                i=0;
            // if(i==num.length())
            //     i=num.length()-1;
        }
        
       
        int count=0;
        i=0;
        
        while(num[i]=='0'){
            
            count++;
            i++;
            }
        
        cout<<count;
        
        num.erase(0,count);
        if(num.length()==0)
            return "0";
        
        else
            return num;
    }
};