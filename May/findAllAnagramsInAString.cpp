class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int h[26]={0};
        int tail=0;
        //int index=0;
        bool flag=false;
        int length_of_s=s.length();
        int length_of_p=p.length();
        cout<<length_of_s<<" "<<length_of_p;

        if(s.length()<p.length())
            return vector<int>();

        for(auto i:p)
            h[i-'a']++;
        
        
        for(int i=0;i<p.length();i++)
            h[s[i]-'a']--;
        
        for(auto x:p){
            if(h[x-'a']==0)
                flag=true;
            else{ 
                flag=false;
                break;    
            }
        }
        if(flag)
            ans.push_back(tail);
            
            
        while(tail<(length_of_s-length_of_p)){
            h[s[tail]-'a']++;
            h[s[tail+length_of_p]-'a']--;
            tail++;
            
            for(auto x:p){
                if(h[x-'a']==0)
                    flag=true;
                else{ 
                    flag=false;
                    break;    
                }
            }    
                if(flag)
                    ans.push_back(tail);
                flag=false;
            
        }
        return ans;
    }
};