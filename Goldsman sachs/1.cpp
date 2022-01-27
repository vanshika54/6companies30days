

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution{
  public:
   vector<vector<string> > Anagrams(vector<string>& arr) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto it:arr){
            string temp=it;
            sort(it.begin(),it.end());
            mp[it].push_back(temp);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
