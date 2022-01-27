
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
              
              sort(arr.begin(),arr.end());
              
              map<vector<int>,int>m;
              vector<vector<int> > ans;
              
               int n = arr.size();
               
               for(int i=0;i<n;i++){
                   for(int j = i+1;j<n;j++){
                       int  l = j+1, r = n-1;
                       
                       while(l<r){
                         int sum = arr[i]+arr[j]+arr[l]+arr[r];
                         
                         
                         if(sum==k){
                             vector<int>v{arr[i],arr[l],arr[j],arr[r]};
                             
                              sort(v.begin(),v.end());
                              
                              m[v]++;
                              
                              l++,r--;
                              
                         }
                         
                         else if(sum>k){
                             r--;
                         }
                         else{
                             l++;
                         }
                         
                       }
                   }
               }
             
             
              for(auto i:m){
                  ans.push_back(i.first);
              }
             return ans;  
                
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}

