
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long  int dp[1001][1001];
    long long  int dfs(int n,int x,int i,int j)
    {
        if(n==0)
            return 1;
        if(i>j)
            return 0;
        if(dp[n][i]!=-1)
            return dp[n][i];
        long long int temp=pow(i,x);
        if(temp<=n)
        {
            return dp[n][i]=dfs(n-temp,x,i+1,j) + dfs(n,x,i+1,j);
        }
        else
        {
            return dp[n][i]= 0;
        }
        
    }
    long long  int numOfWays(int n, int x)
    {
        memset(dp,-1,sizeof dp);
        return dfs(n,x,1,n);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}
