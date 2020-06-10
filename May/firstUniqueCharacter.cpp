class Solution {
public:
    int firstUniqChar(string s) {
        int h[26];
        memset(h,-1,sizeof(h));
        int index=0;
        if(s.length()==0)
            return -1;
        for(auto i:s){
            if(h[i-'a']==-1)
                h[i-'a']=index;
            else h[i-'a']=INT_MIN;
            index++;
        }
        // for(int i=0;i<26;i++)
        //     cout<<h[i]<<" ";
        int ans=INT_MAX;
        for(int i=0;i<26;i++){
            if(h[i]>-1)
                ans=min(ans,h[i]);
            // cout<<ans<<" ";
            
            
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
        
        
        
    }
};