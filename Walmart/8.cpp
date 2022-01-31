

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int height(int n){
        int ans = (-1 + sqrt(1 + (8*n))) / 2;
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.height(N)<<endl;
    }
    return 0;
}


