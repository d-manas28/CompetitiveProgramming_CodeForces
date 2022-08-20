#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
int strlen(string temp){
  int ctr = 0;
  while(temp[ctr]!='\0'){
    ctr++;
  }
  return ctr;
}
int main(){
  fast;
  cin.tie(NULL);
  vector<string> words;
  int num;
  cin>>num;
  string current_word;
  for(int i=0;i<num;i++){
    cin>>current_word;
    words.push_back(current_word);
  }
  for(auto i = words.begin();i!=words.end();i++){
    int strlength = strlen(*i);
    if(strlength>10){
      char fl = (*i)[0];
      char ll = (*i)[strlength-1];
      string len = to_string(strlength-2);
      string new_string = fl + len + ll;
      *i = new_string;
    }
  }
  for(int i=0;i<num;i++){
    cout<<words[i]<<"\n";
  }

  return 0;
}
