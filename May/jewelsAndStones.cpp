class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans=0;
        char h[65]={0};
        for(int i=0;i<J.length();i++){
            h[J[i]-'A']++;
        }
        for(int i=0;i<S.length();i++){
            if(h[S[i]-'A']>0)
                ans++;
        }
        return ans;
        
    }
};