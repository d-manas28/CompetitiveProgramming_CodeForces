#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
bool isUpper(char c){
  if(c>='A' && c<='Z'){
    return true;
  }
}
char toLower(char c){
  if(c>='A' && c<='Z')
    c = c+32;
  return c;
}
int main(){
  fast;
  cin.tie(NULL);
  string s1,s2;
  cin>>s1;
  cin>>s2;
  for(int i=0;i<s1.length();i++){
    s1[i] = toLower(s1[i]);
    s2[i] = toLower(s2[i]);
  }
  if(s1<s2)cout<<"-1";
  else if(s1>s2)cout<<"1";
  else
    cout<<"0";
  return 0;
}
