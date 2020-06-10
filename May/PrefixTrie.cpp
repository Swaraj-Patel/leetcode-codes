class Trie {
     Trie* root=NULL;
public:
    /** Initialize your data structure here. */
    
    Trie* children[26];
    bool isEnd;
    Trie(){
        
         
        for(int i=0;i<26;i++){
            
            children[i]=NULL;
            
        } 
        isEnd=false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        if(root==NULL)
            root=new Trie();
            
        Trie* crawler=root;
        for(auto i:word){
            int val=i-'a';
            if(crawler->children[val]==NULL)
                crawler->children[val]=new Trie;
            
            crawler=crawler->children[val];
            
        }
        crawler->isEnd=true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        if(root==NULL)
            return false;
        Trie* crawler=root;
        
        for(auto i:word){
            int val=i-'a';
            if(crawler->children[val]==NULL)
                return false;
            crawler=crawler->children[val];
        }
        return(crawler->isEnd);
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
        if(root==NULL)
            return false;
        Trie* crawler=root;
        
        for(auto i:prefix){
            int val=i-'a';
            if(crawler->children[val]==NULL)
                return false;
            crawler=crawler->children[val];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */