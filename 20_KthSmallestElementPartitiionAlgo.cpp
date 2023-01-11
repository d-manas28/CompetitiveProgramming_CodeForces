#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define fl(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int partition(int *arr,int f,int r,int k){
    int pivot = arr[f];
    int j = r;
    for(int i=r;i>f;i--){
        if(arr[i]>pivot){
            swap(arr[i],arr[j]);
            j--;
        }
    }
    swap(arr[j],arr[f]);
    return j;
}

int KthSmallestElement(int *arr,int s,int l,int k){
    if(s==l){
        if(s==k-1)
            return arr[k-1];
    }
    else{
        int p = partition(arr,s,l,k);
        if(p+1 == k)
            return arr[p];
        else{
            if(p<k)
                KthSmallestElement(arr,p+1,l,k);
            else
                KthSmallestElement(arr,s,p-1,k);
        }
    }
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
    int ele = KthSmallestElement(arr,0,n-1,k);
    cout<<ele;
    return 0;
}