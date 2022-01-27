#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {
        if(n==1) return arr[0];
        int a = 0;
        int b = arr[0];
        
        for(int i=2;i<=n;i++)
        {
            int c = max(b, a+arr[i-1]);
            a = b;
            b = c;
        }
        
        return b;
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
		int a[n];
		
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}



