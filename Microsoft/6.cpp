



#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution
{
    public:
    string keypad[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   public:
   void printPossWords(int index , int n , int arr[] , string& ds , vector<string>& ans){
       if(index >= n){
           ans.push_back(ds);
           return;
       }
       
       int currNum = arr[index];
       string currKeyPadVal = keypad[currNum];
       
       for(int i = 0; i < currKeyPadVal.length(); i++){
           ds.push_back(currKeyPadVal[i]);
           printPossWords(index+1 , n , arr , ds , ans);
           ds.pop_back();
       }
   }
   vector<string> possibleWords(int a[], int n)
   {
       vector<string> ans;
       
       if(n == 0)
       return ans;
       
       string ds;
       printPossWords(0 , n , a , ds , ans);
       
       return ans;
   }
};


int main() {
  
	int T;
	
	cin >> T; 
	while(T--){ 
	   int N;
	    
	   cin >> N;
	   int a[N];
	   for(int i =0;i<N;i++){
	       cin >> a[i];
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}



