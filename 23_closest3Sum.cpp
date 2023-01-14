#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int closet3Sum(int arr[],int n,int x){
    int result = arr[0]+arr[1]+arr[n-1];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int a_pointer = i+1;
        int b_pointer = n-1;

        while(a_pointer<b_pointer){
            int sum = arr[i] + arr[a_pointer] + arr[b_pointer];

            if(sum<x){
                a_pointer++;
            }

            else{
                b_pointer--;
            }

            if(abs(sum-x)<abs(result-x)){
                result = sum;
            }
        }
    }
    return result;
}
int main(){
    fast;
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;
    cin>>x;
    int ans = closet3Sum(arr,n,x);
    cout<<ans;
    return 0;
}