class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> ans;
            int h[26]={0};
            int tail=0;
            //int index=0;
            bool flag=false;
            int length_of_s2=s2.length();
            int length_of_s1=s1.length();
            //cout<<length_of_s<<" "<<length_of_p;

            if(s2.length()<s1.length())
                return false;

            for(auto i:s1)
                h[i-'a']++;


            for(int i=0;i<s1.length();i++)
                h[s2[i]-'a']--;

            for(auto x:s1){
                if(h[x-'a']==0)
                    flag=true;
                else{ 
                    flag=false;
                    break;    
                }
            }
            if(flag)
                return true;


            while(tail<(length_of_s2-length_of_s1)){
                h[s2[tail]-'a']++;
                h[s2[tail+length_of_s1]-'a']--;
                tail++;

                for(auto x:s1){
                    if(h[x-'a']==0)
                        flag=true;
                    else{ 
                        flag=false;
                        break;    
                    }
                }    
                    if(flag)
                       return true; //ans.push_back(tail);
                    flag=false;

            }
        return false;
            
        }
};