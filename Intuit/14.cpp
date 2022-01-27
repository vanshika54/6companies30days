
int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    dp[i][j]=0;
                }
            }
        }
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        int maxval=-1;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                for(int d=0;d<4;d++){
                    int x=a+dx[d];
                    int y=b+dy[d];
                    if(isvalid(x,y,grid,n,m)&&dp[x][y]>dp[a][b]+1){
                        q.push({x,y});
                        dp[x][y]=dp[a][b]+1;
                        maxval=max(maxval,dp[x][y]);
                    }
                }
            }
        }
        return maxval;
    }
    bool isvalid(int x,int y,vector<vector<int>>&grid,int n,int m){
        if(x>=0&&y>=0&&x<n&&y<m){
            return true;
        }
        return false;
    }

