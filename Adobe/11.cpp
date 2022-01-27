
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string amendSentence (string s)
    {
        string res = "", temp = "";
        res+=tolower(s[0]);
        for(int i=1; i<s.size(); i++){
            if(isupper(s[i])){
                res+=temp;
                res+=' ';
                temp = "";
                char ch = tolower(s[i]);
                temp+=ch;
            }
            else{
                temp+=s[i];
            }
        }
        res+=temp;
        return res;
    }
};
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}

