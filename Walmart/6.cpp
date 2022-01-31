
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
class Solution{
    public:
     long long power(int N,int R) {
       if(R==0) return 1;
       if(R==1) return N;
       long long ans=power(N, R/2)%1000000007;
       ans=(ans*ans)%1000000007;
       if(R%2==0) {return ans%1000000007;}
       else {return (ans*N)%1000000007;}
   }

};
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long N;
        cin>>N;
        long long R = 0; 
        R = rev(N);
        Solution ob;
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}



