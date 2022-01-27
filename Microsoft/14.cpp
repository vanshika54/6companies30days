
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minSteps(int D){
        
        int target = abs(D), sum = 0, step = 0;
       
       while(sum < target || (sum-target)%2 != 0)
       {
           step++;
           sum += step;
       }
       return step;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
} 
