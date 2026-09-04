class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       
        int m=image.size();
        int n=image[0].size();

        int src=image[sr][sc];

        if(src==color){
            return image;
        }

        queue<pair<int, int>> q;

        q.push({sr, sc});
        image[sr][sc] = color;
        
    
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        while(!q.empty()){
            int u=q.front().first;
            int v=q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int row=u+drow[i];
                int col=v+dcol[i];
                 if (row >= 0 && row < m &&
                    col >= 0 && col < n &&
                    image[row][col] == src){
                        image[row][col]=color;

                        q.push({row,col});

                    }
            }
        }
        return image;
        
    }
};