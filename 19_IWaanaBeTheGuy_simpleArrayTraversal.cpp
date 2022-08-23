#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
int main(){
  int n;
  cin>>n;
  int x_level,y_level;
  vector<int> validator(n+1,0);
  // int validator[n+2] = {0}; -> to initialize all zero in array is this fashion
  // int valid[n+1] = {0}

  // but in vector to initialize first n elements as zero has other way that is
  // vector<int> v(n+1,0)
  int index;
  cin>>x_level;
  while(x_level--){
    cin>>index;
    validator[index] = 1;
  }
  cin>>y_level;
  while(y_level--){
    cin>>index;
    if(validator[index] == 0)
      validator[index] = 1;
  }
  int i=1;
  for(;i<=n;i++){
    if(validator[i] == 0){
      cout<<"Oh, my keyboard!";
      break;
    }
  }
  if(i == n+1){
    cout<<"I become the guy.";
  }
  return 0;
}
