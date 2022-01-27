
#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int* ans = new int[2];
        unordered_set<int> s; 

        for(int i = 0; i < n; i++){
            if(s.find(arr[i]) != s.end()){
                ans[0] = arr[i];
            }
            else{
                s.insert(arr[i]);
            }
        }
        
        int first = 1;
        
        for(int i = 1; i < n+1; i++){
            if(s.find(i) == s.end()){
                ans[1] = i;
                break;
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}


