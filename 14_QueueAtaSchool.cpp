#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define lln long long int
int main(){
  fast;
  cin.tie(NULL);
  lln n;
  int t;
  cin>>n>>t;
  string queue;
  cin>>queue;
  while(t--){
    for(lln i=0;i<n;i++){
      if(queue[i] == 'B' && queue[i+1] == 'G'){
        swap(queue[i],queue[i+1]);
        i++;
      }
    }
  }
  cout<<queue;
  return 0;
}
