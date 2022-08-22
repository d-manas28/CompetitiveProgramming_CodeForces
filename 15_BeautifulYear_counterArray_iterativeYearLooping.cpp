#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int main(){
  fast;
  cin.tie(NULL);
  int input_year;
  cin>>input_year;
  int ctr_arr[10] = {0};
  for(int i = input_year+1;i<=9999;i++){
    int flag = 0;
    int temp = i;
    while(temp){
      int num = temp%10;
      ctr_arr[num]++;
      temp = temp/10;
    }
    for(auto i:ctr_arr){
      if(i>1){
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      cout<<i;
      break;
    }
    else{
      for(int i=0;i<10;i++)
        ctr_arr[i] = 0;
    }
  }
  return 0;
}
