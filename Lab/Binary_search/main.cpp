#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int binarysearch(int *arr, int n,int k){
    int l=0,r=n-1,mid;
     while(true){
        mid = l+(r-l)/2;
        if(k==arr[mid]){
            return mid;
            break;
        }
        else if(k>arr[mid]){
            l=mid+1;
        }
        else if(k<arr[mid]){
            r=mid-1;
        }
        else if(l>=r){
            return -1;
            break;
        }
     }
}

int main(){
    fast;
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(q--){
        int k;
        cin>>k;
        int ret = binarysearch(arr,n,k);
        cout<<ret<<'\n';
    }
}
