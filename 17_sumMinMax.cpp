#include<bits/stdc++.h>
#include<climits>
#define fast ios_base::sync_with_stdio(false)
#define lln long long int
#define fl(i,a,n) for(int i=a;i<n;i++)
using namespace std;
lln findSumOfPair(lln *arr,int n){
    lln min = LLONG_MAX;
    lln max = LLONG_MIN;

    fl(i,0,n){
        if(arr[i]<min)min=arr[i];
        if(arr[i]>max)max=arr[i];
    }
    lln res = min+max;
    return res;
}

int main(){
    int t;
    lln n;
    cin>>t;
    while(t--){
        cin>>n;
        lln arr[n+2];
        fl(i,0,n){
            cin>>arr[i];
        }
        lln res = findSumOfPair(arr,n);
        cout<<res<<endl;
    }

    return 0;
}