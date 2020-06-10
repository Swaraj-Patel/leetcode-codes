class Solution {
public:
    vector<int> weight;
    int sum;
    Solution(vector<int>& w) {
        sum=0;
        for(auto i:w){
            sum += i;
            weight.push_back(sum);
        }
    }
    
    int pickIndex() {
        int index=rand() % sum;
        cout<<index;
        return binary(index +1);
    }
    
    int binary(int value){
        int l=0;
        int h=weight.size()-1;
        while(l<h){
            int mid= l + (h-l)/2;
            if(weight[mid] < value)
                l=mid +1;
            else
                h=mid;
            
        }
        return l;
    }
};