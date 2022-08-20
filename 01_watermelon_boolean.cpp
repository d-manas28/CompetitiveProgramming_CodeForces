#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
int main(){
  fast;
  cin.tie(NULL);
  int w;
  cin>>w;
  if(w&1) //number is odd
    cout<<"NO";
  else{
    if(w == 2)cout<<"NO";
    else
      cout<<"YES";
  }
  return 0;
}
