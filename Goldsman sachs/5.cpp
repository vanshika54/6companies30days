#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
class Solution{
public:	
	ull getNthUglyNo(int n) {
	   long long c2 = 0,c3 = 0,c5 = 0;
	    vector<long long> dp(n+1);
	    dp[0] = 1;
	    for(int i=1;i<=n;i++){
	        long long n2 = 2*dp[c2];
	        long long n3 = 3*dp[c3];
	        long long n5 = 5*dp[c5];
	        dp[i] = min({n2,n3,n5});
	        if(dp[i] == n2){
	            c2++;
	        }
	        if(dp[i] == n3){
	            c3++;
	        }
	        if(dp[i] == n5){
	            c5++;
	        }
	    }
	    return dp[n-1];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}

