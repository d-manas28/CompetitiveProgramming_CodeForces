#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define lln long long int
int main(){
  fast;
  cin.tie(NULL);
  lln t;
  cin>>t;
  lln a,b;
  while(t--){
    cin>>a>>b;
    if(a%b == 0)cout<<0<<endl;
    else
      cout<<b-(a%b)<<endl;
  }
  return 0;
}
