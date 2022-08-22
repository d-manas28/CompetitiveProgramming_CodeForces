#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  string s;
  cin>>s;
  if(s[0] >= 'a' && s[0] <= 'z')
    s[0] = s[0] - 32;
  cout<<s;

  return 0;
}
