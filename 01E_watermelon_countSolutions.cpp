#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
int main(){
  fast;
  cin.tie(NULL);
  int w;
  cin>>w;
  if(w&1)cout<<"NO";
  else{
    if(w==2)cout<<"NO";
    else{
      int n = w/2;
      int solCTR = 0;
      for(int i=2;i<=n;i=i+2){
        solCTR++;
      }
      cout<<"YES "<<solCTR;
    }
  }
  return 0;
}
