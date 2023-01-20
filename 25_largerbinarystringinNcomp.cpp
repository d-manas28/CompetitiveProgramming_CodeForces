#include<bits/stdc++.h>
using namespace std;
long long int countLargerBinString(string s){
    int sum=0, onesekam=0;
    int n=s.length();
    long long int ans;
    unordered_map<int, int> mm;
    for(auto i:s){
        if(s[i]=='0')
            sum--;
        else
            sum++;
        if(sum<=0)
            onesekam++;
        mm[sum]++;

    }
    sum=0;
    for(int i=0;i<n;i++){
        ans = ans+(n-i-onesekam);
        if(s[i]=='1'){
            sum++;
            mm[sum]--;
            onesekam=onesekam+mm[sum];
        }
        else{
            sum--;
            mm[sum]--;
            onesekam--;
            onesekam=onesekam-mm[sum+1];
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    long long int ans = countLargerBinString(s);
    cout<<ans;
    return 0;
}