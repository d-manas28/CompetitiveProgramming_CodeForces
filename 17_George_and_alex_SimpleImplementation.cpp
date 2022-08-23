#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  int n;
  cin>>n;
  int quan,capa;
  int room_ctr = 0;
  while(n--){
    cin>>quan>>capa;
    if(capa-quan >= 2)
      room_ctr++;
  }
  cout<<room_ctr;
}
