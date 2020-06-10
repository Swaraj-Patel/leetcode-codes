class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char >> pq;
        int h[256]={0};
        string ans;
        for(auto i:s)
            h[i-' ']++;
        
        for(auto i:s){
            pq.push(make_pair(h[i-' '],i));
        }
        
        while(!pq.empty()){
            auto t=pq.top();
            //ans.append(&t.second);
            ans+=t.second;
            pq.pop();
        }
        return ans;
        
    }
};