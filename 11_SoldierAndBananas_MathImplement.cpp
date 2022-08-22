#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define lint long long int
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  lint k,n,w;
  cin>>k>>n>>w;
  lint sum_n = (w*(w+1))/2;
  sum_n = k*sum_n;
  sum_n = sum_n - n;
  if(sum_n <= 0)
    cout<<0;
  else
    cout<<sum_n;
  return 0;
}
