#include<bits/stdc++.h>
using namespace std;
const int size = 5;
class arraytype{
    int a[size];

    public:
     arraytype(){
        for(int i=0;i<size; i++){
            a[i]=i;
        }
     }

     int &operator[](int i){
        return a[i];
     }

};

int main(){
    arraytype ob;

    for(int i=0; i<size; i++){
        cout<<ob[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        ob[i]=ob[i]+10;
    }

    for(int i=0; i<size; i++){
        cout<<ob[i]<<" ";
    }
}