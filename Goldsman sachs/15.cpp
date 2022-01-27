#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
       if(nums.size() % 2 != 0) return (false);
       unordered_map<int,int> mp;
       
       int cnt = 0;
       for(int i=0; i<nums.size(); i++){
           int rem = nums[i] % k;
           int newRem = k - rem == k ? 0 : k - rem;
           if(mp.find(newRem) != mp.end() && mp[newRem]){
               cnt += 2;
               mp[newRem]--;
           }
           else mp[rem]++;
       }
       return cnt == nums.size();
   }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}



