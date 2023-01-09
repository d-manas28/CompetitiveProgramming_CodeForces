#include<bits/stdc++.h>
using namespace std;


#define fast ios_base::sync_with_stdio(false)
int main(){
  fast;
  cin.tie(NULL);
  int l_age,b_age;
  cin>>l_age>>b_age;
  for(int i=1;true;i++){
    l_age *= 3;
    b_age *= 2;
    if(l_age>b_age){
      cout<<i;
      break;
    }
  }
  return 0;
}
