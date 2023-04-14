class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int m = mat.size(), n = mat[0].size();
        queue<pair<pair<int, int>, int>>q; // coordinate and steps
        
        //2d vector for visited and to store distance
        vector<vector<int>>visit(mat.size(), vector<int>(mat[0].size(), 0));  
        vector<vector<int>>dist(mat.size(), vector<int>(mat[0].size(), 0));  

        //push all coordinates and steps of zeros in queue 

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0){
                    q.push({{i, j},0});
                    visit[i][j] = 1;
                }
            }
        }

        int row[4] = {1, -1, 0, 0}, col[4] = {0, 0, -1, 1};
       

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int steps = q.front().second;
            dist[r][c] = steps;
            q.pop();
            for(int i=0; i<4; i++){
                //visiting neighbour of r and c up, down, left, right
                int nearRow = r + row[i], nearCol = c + col[i];

                if(nearRow >= 0 && nearRow < m && nearCol >= 0 && nearCol < n && visit[nearRow][nearCol] == 0){
                    visit[nearRow][nearCol] = 1;
                    q.push({{nearRow, nearCol}, steps + 1});
                }
            }
        }

        return dist;
    }
};