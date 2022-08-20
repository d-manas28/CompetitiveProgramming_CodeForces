#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  int n,k;
  vector<int> scores;
  cin>>n>>k;
  int scoreVal;
  loop(i,n){
    cin>>scoreVal;
    scores.push_back(scoreVal);
  }
  int cand_count = 0;
  if(scores[k-1] == 0){
    if(scores[0] == 0)
      cout<<cand_count;
    else{
      loop(i,k){
        if(scores[i] > 0)
          cand_count++;
      }
      cout<<cand_count;
    }
  }
  else{
    cand_count = k;
    for(int i=k;i<n;i++){
      if(scores[i] == scores[k-1])cand_count++;
    }
    cout<<cand_count;
  }
  return 0;
}
