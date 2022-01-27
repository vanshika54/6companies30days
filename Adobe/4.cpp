#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+= arr[i];
        }
        if(sum%2!=0)
        {
            return false;
        }
        else
        {
            int h = sum/2;
            int dp[n+1][h+1];
            
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=h;j++)
                {
                    if(i==0)
                    {
                        dp[i][j]=0;
                    }
                    if(j==0)
                    {
                        dp[i][j]=1;
                    }
                }
            }
            
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=h;j++)
                {
                    if(arr[i-1]<=j)
                    {
                        dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
        return dp[n][h];    
        }
        
        
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
