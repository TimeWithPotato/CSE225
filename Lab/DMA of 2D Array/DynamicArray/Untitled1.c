#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
const int N=1e5+10;
int main(){
    fast;
    int t,q;
    cin>>t;
    while(t--){
        int n,u;
        cin>>n>>u;
        vector<int> sum(n,0);
        vector<int> prefix_sum(n,0);
        while(u--){
            int l,r,v;
            sum[l]+=v;
            if(r+1<1) sum[r+1]-=v;
        }
        prefix_sum[0]=sum[0];
        for(int i=1; i<n; i++){
            prefix_sum[i]=prefix_sum[i-1]+sum[i];
        }

        int q;
        cin>>q;
        while(q--){
            int i;
            cin>>i;
            cout<<prefix_sum[i]<<'\n';
        }

    }
}
