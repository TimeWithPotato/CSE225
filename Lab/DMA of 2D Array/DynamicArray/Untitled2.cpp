#include<bits/stdc++.h>
using namespace std;
int main(){
  int m = 3, n=4, c=0;

  int *arr = new int[m*n];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        *(arr+i*n+j) = c++;
    }
  }

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<*(arr+i*n+j)<<" ";
    }
    cout<<endl;
  }
}
