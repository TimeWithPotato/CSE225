#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
   dynArr *array1 = new dynArr();
   dynArr *array2 = new dynArr(5);

   int val;
   cout<<"Enter the value: \n";

   for(int i=0; i<5; i++){
    cin>>val;
    array2->setValue(i,val);
   }
   cout<<endl;
   for(int i=0; i<5; i++){
    val = array2->getValue(i);
    cout<<"The value of "<<i<<"th index is: "<<val<<endl;
   }

    array2->allocate(7);
    for(int i=5; i<7; i++){
    cin>>val;
    array2->setValue(i,val);
   }
   cout<<endl;
   for(int i=0; i<7; i++){
    val = array2->getValue(i);
    cout<<"The value of "<<i<<"th index is: "<<val<<endl;
   }
   delete array1;
   delete array2;
   return 0;
}
