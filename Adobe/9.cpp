

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string nextPalin(string str)
        {
            if(str.size() <= 3){
                return "-1";
            }
            string res;
            int mid = str.size()/2-1;
            string s = str.substr(0, mid+1);
            int n = s.length();
            int ind = n;
            for(int i=n-1;i>0;i--){
                if(s[i] > s[i-1]){
                    ind = i-1;
                    break;
                }
            }
            if(ind == n){
                return "-1";
            }
            for(int i=n-1; i>0; i--){
                if(s[i] > s[ind]){
                    swap(s[i], s[ind]);
                    break;
                }
            }
            reverse(s.begin()+ind+1, s.end());
            res += s;
            if(str.size()%2){
                res += str[str.size()/2];
            }
            reverse(s.begin(), s.end());
            res += s;
            return res;
        }
};
int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
} 
