#include<bits/stdc++.h>
#include "dyn2DArr.h"
#include "dyn2DArr.cpp"
using namespace std;

int main(){
    dyn2DArr<int> *arr = new dyn2DArr<int>(3,3);
    int n;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter " <<j <<"th " <<i<<"th value: ";
            cin>>n;
            arr->setValue(i,j,n);
        }
    }

    cout<<endl<<"Printing the value: "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            n = arr->getValue(i,j);
            cout<<n<<" ";
        }
        cout<<endl;
    }

    delete arr;

    //arr.~dyn2DArr();
}
