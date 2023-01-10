#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define fl(i,a,n) for(int i=a;i<n;i++)
using namespace std;

bool mod_bin_search(int start,int end,int n,vector<int> arr,int key){
    if(start<=end){
      int mid = (start + end)/2;
        if(arr[mid] == key)return true;
        else{
            bool left = mod_bin_search(start,mid-1,n,arr,key);
            if(left)return true;
            bool right = mod_bin_search(mid+1,end,n,arr,key);
            if(right)return true;

            // return false;
        }
    }
    return false;
}
bool search(int N,vector<int> &A,int key){
    return(mod_bin_search(0,N-1,N,A,key));
}
int main(){
    fast;
    cin.tie(NULL);
    int n,key,d;
    vector<int> arr;
    cin>>n;
    fl(i,0,n){
        cin>>d;
        arr.push_back(d);
    }
    cin>>key;
    bool ans = search(n,arr,key);
    cout<<ans;
}