#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define loop(x,n,param) for(int x= param;x<n;x++)
int main(){
  fast;
  cin.tie(NULL);
  string sum;
  cin>>sum;
  int countArray[4] = {0};
  loop(i,sum.length(),0){
    if(sum[i] == '1')countArray[1]++;
    else if(sum[i] == '2')countArray[2]++;
    else if(sum[i] == '3')countArray[3]++;
    else
      continue;
  }
  string new_sum = "";
  loop(i,4,1){
    loop(j,countArray[i],0){
      new_sum = new_sum+to_string(i)+"+";
    }
  }
  loop(i,(new_sum.length())-1,0)
    cout<<new_sum[i];
  return 0;
}
