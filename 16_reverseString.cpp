#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int getLength(string s){
    int l = 0;
    while(s[l] != '\0'){
        l++;
    }
    return l;
}
void swap(char *a,char *b){
    char temp;
    temp = *b;
    *b = *a;
    *a = temp; 
}
string reverseString(string s){
    int len = getLength(s);
    int f = 0;
    int r = len-1;
    while(f<=r){
        if(s[f]!=s[r])
            swap(&(s[f]),&(s[r]));
        f++;
        r--;
    }
    return s;
}
int main(){
    fast;
    cin.tie(NULL);

    string s,output;
    getline(cin,s);
    output = reverseString(s);
    cout<<output;
}