

class Solution {
    int fun(vector<int>&maze,vector<vector<int>>&dp,int n,int i,int j)
    {
        if(i >=j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int a= 0,b=0;
        a = maze[i] + min(fun(maze,dp,n,i+2,j),fun(maze,dp,n,i+1,j-1));
        b = maze[j] + min(fun(maze,dp,n,i+1,j-1),fun(maze,dp,n,i,j-2));
        return dp[i][j] = max(a,b);
    }
public:
    bool stoneGame(vector<int>& piles) {
        int total = 0;
        for(auto x:piles)
        total += x;
        int n = piles.size();
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        int x = fun(piles,dp,n,0,n-1);
        int y = total - x;
        if(x > y)
            return true;
        return false;
        
    }
};

