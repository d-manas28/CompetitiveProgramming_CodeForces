#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
#define fl(i,a,n) for(int i=a;i<n;i++)
void sort012(int *arr,int n){
    int cArr[3] = {0};
    fl(i,0,n){
        if(arr[i] == 0){
            cArr[0]++;
        }
        else if(arr[i] == 1)
        {    
            cArr[1]++;
        }
        else{     
            cArr[2]++;
        }
    }
    int pointer = 0;
    fl(i,0,3){
        int t = cArr[i];
        int j;
        for(j = pointer;j < pointer+t;j++){
            arr[j] = i;
        }
        pointer = j;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n+2];
    fl(i,0,n)cin>>arr[i];
    sort012(arr,n);
    fl(i,0,n)cout<<arr[i]<<" ";
    return 0;
}