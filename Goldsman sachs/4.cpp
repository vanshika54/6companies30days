

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
string encode(string src)
{
  string ans="";
  int counter=1;
  char c=src[0];
  for(int i=1; i<=src.size(); i++){
      if(src[i]==c){
          counter++;
      }
      else if(src[i]!=c){
          ans+=src[i-1];
          ans+=to_string(counter);
          counter=1;
          c=src[i];
      }
  }
  return ans;
}

