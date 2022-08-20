#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define loop(x,n) for(int x=0;x<n;x++)
int main(){
  int lines;
  cin>>lines;
  vector<string> program;
  string statement;
  loop(i,lines){
    cin>>statement;
    program.push_back(statement);
  }
  int X = 0;

  for(int i=0;i<program.size();i++){
    string current_stt = program[i];
    int k = 0;
    while(current_stt[k]!='\0'){
      if(current_stt[k] == '+'){
        X++;
        break;
      }
      else if(current_stt[k] == '-'){
        X--;
        break;
      }
      k++;
    }
  }
  cout<<X;
  return 0;
}
