#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> op;
  int value;
  while(n--){
    cin>>value;
    op.push_back(value);
  }
  int res = 0;
  res = accumulate(op.begin(),op.end(),res);
  if(res>0)
    cout<<"HARD";
  else
    cout<<"EASY";
  return 0;
}
