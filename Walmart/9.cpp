


class Solution {
public:
    int getMoneyAmount(int n) {
        if (n==1) return 0;
        
        vector<vector<int>> d(n+2,vector<int>(n+2,0));
        for (int j=1; j <= n; j++) {
            for (int i=j-1; i>=1; i--) {                
                int tmp = INT_MAX;
                for (int k = i; k <= j; k++) {
                    tmp = min(tmp, k+max(d[i][k-1], d[k+1][j]));
                }
                d[i][j] = tmp == INT_MAX ? 0 : tmp;
            }
        }
        
        return d[1][n];
    }
};



