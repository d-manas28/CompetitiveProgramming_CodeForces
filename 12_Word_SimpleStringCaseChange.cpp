#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define loop(x,n) for(int x=0;x<n;x++)
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  string s;
  cin>>s;
  int lcase_ctr = 0,ucase_ctr = 0;
  int strlen = s.length();
  loop(i,strlen){
    if(s[i]>='a' && s[i]<='z')  lcase_ctr++;
    else if(s[i]>='A' && s[i]<='Z') ucase_ctr++;
    else
      continue;
  }
  if(lcase_ctr>=ucase_ctr){
    loop(i,strlen){
      if(s[i]>='A' && s[i]<='Z'){
        s[i] = s[i]+32;
      }
    }
  }
  else{
    loop(i,strlen){
      if(s[i]>='a' && s[i]<='z'){
        s[i] = s[i]-32;
      }
    }
  }
  cout<<s;
  return 0;
}
