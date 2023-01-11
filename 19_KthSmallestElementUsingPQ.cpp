#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false)
#define fl(i,a,n) for(int i=a;i<n;i++) 
int findKthSmallestElement(int *arr,int s,int r, int k){
    priority_queue<int, vector<int>, greater<int>> q;
    fl(i,0,r+1){
        q.push(arr[i]);
    }
    fl(i,0,k-1){
        q.pop();
    }
    return q.top();
}
int main(){
    fast;
    cin.tie(NULL);

    int n,k;
    cin>>n;
    int arr[n+2];
    fl(i,0,n){
        cin>>arr[i];
    }
    cin>>k;
    int ele = findKthSmallestElement(arr,0,n-1,k);
    cout<<ele;
    return 0;
}