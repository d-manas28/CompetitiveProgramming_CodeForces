#include<bits/stdc++.h>
using namespace std;
#define lln long long int
#define fast ios_base::sync_with_stdio(false)
int main(){
  fast;
  cin.tie(NULL);
  lln num;
  cin>>num;
  lln even_cnt,odd_cnt;
  even_cnt = num/2;
  odd_cnt = num - even_cnt;
  lln res = 0;
  res = (even_cnt*(even_cnt+1)) - (odd_cnt*odd_cnt);
  cout<<res;
  return 0;
}
