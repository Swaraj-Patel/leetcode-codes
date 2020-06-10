class StockSpanner {
    vector<int>prices;
    vector<int>span;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        prices.push_back(price);
        int index=prices.size()-1;
        int count=1;
        while(index>0){
            if(price>=prices[index-1]){
                count+=span[index-1];
                index=index-span[index-1];
            }
            else
                break;
            
        }
        span.push_back(count);
        return count;
    }
};