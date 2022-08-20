#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define loop(x,m) for(int x= 0;x<m;x++)
int main(){
  fast;
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<vector<int>> problems;
  loop(i,n){
    vector<int> cols;
    int k;
    loop(j,3){
      cin>>k;
      cols.push_back(k);
    }
    problems.push_back(cols);
  }
  int sols = 0;
  loop(i,n){
     int status = 0;
     status = accumulate(problems[i].begin(),problems[i].end(),status);
     if(status>=2)sols++;
  }

  cout<<sols;

  return 0;
}
