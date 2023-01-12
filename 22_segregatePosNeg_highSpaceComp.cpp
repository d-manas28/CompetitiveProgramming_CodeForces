#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define fl(i,a,n) for(int i=a;i<n;i++)
using namespace std;
void segregate(int *arr,int n){
    int cArr[n+2] = {0};
    int countN = 0,countP = 0;
    fl(i,0,n){
        if(arr[i] < 0)countN++;
        else
            countP++;
    }
    int nP = 0;
    int pP = countN;
    fl(i,0,n){
        if(arr[i]<0){
            // cout<<arr[i]<<" is Negative\n";
            cArr[nP++] = arr[i];
        }
        else{
            // cout<<arr[i]<<" is Positive\n";
            cArr[pP++] = arr[i];
        }
    }

    fl(i,0,n)cout<<cArr[i]<<" ";
}
int main(){
    fast;
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+2];
    fl(i,0,n)cin>>arr[i];
    segregate(arr,n);
    return 0;
}