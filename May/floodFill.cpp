class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int current_color=image[sr][sc];
        int m=image[0].size();
        int n=image.size();
        cout<<n<<m<<endl;
        stack<pair<int,int>>st;
        vector<vector<int>>visited(n,vector<int>(m,0));
        
        st.push({sr,sc});
       
        while(!st.empty()){
            auto t=st.top();
            int i=t.first;
            int j=t.second;
            visited[i][j]=1;
            image[i][j]=newColor;
            st.pop();
            cout<<"before if";
            if(checkIndex(image,visited,i+1,j,current_color,n,m)){//down
                
                cout<<"1="<<i<<" "<<j<<endl;
                st.push({i+1,j});
                
                
            }
            
            if(checkIndex(image,visited,i-1,j,current_color,n,m)){//up
                
                cout<<"2"<<i<<" "<<j<<endl;
                st.push({i-1,j});
               
                
            }
            if(checkIndex(image,visited,i,j-1,current_color,n,m)){//left
               
                cout<<"3"<<i<<" "<<j<<endl;
                st.push({i,j-1});
                
                
            }
            if(checkIndex(image,visited,i,j+1,current_color,n,m)){//right
                
                cout<<"4"<<i<<" "<<j<<endl;
                st.push({i,j+1});
                
                
            }
        }
        return image;
    }
    
bool checkIndex(vector<vector<int>>&image,vector<vector<int>>&visited,int i,int j,int current_color,int n,int m){
        if((i>=0 and i<n and j>=0 and j<m) and image[i][j]==current_color and visited[i][j]==0 )
            return true;
        return false;
    }
};