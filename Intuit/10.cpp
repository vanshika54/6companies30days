

class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,bool vis[],int s)
    {
        vis[s]=true;
        for(int i=0;i<isConnected.size();i++)
        {
            if(i!=s)
            {
                if(isConnected[s][i] && !vis[i])
                    dfs(isConnected,vis,i);
            }       
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        bool vis[isConnected.size()];
        for(int i=0;i<isConnected.size();i++)
            vis[i]=false;
        int ans=0;
        for(int i=0;i<isConnected.size();i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(isConnected,vis,i);
            }
        }
        return ans;
    }
};


