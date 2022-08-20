#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define loop(x,n,param) for(int x=param;x<n;x++)

using namespace std;
int main(){
    fast;
    cin.tie(NULL);
    int mat[6][6];
    loop(i,6,0){
      mat[i][0] = 0;
      mat[0][i] = 0;
    }
    int input,m,n,moves = 0;
    loop(i,6,1){
      loop(j,6,1){
        cin>>input;
        if(input == 1){
          m = i;
          n = j;
        }
      }
    }
    if(m!=3){
      moves += abs(m-3);
    }
    if(n!=3){
      moves += abs(n-3);
    }
    cout<<moves;

}
