#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define fl(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int countLargerBinarySS(string s){
    // vector<string> v;
    // for(string i:v){
        // This would again lead to O(n^3) 
    // }
    long long counter = 0;
    int length = s.length();
    for(int i=0;i<length;i++){
        string ss = "";
        int countz = 0,counto = 0;
        for(int j=i;j<length;j++){
            if(s[j] == '0')countz++;
            else    counto++;
            if(counto>countz)counter++;
            ss = ss + s[j];
            // v.push_back(ss);
        }
    }
    // for(auto i:v)
    //     cout<<i<<'\n';

        return counter;
}
int main(){
    fast;
    cin.tie(NULL);
    string s;
    cin>>s;
    int count = countLargerBinarySS(s);
    cout<<count;
    return 0;
}

