#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;

dynArr::dynArr(){
   data  = NULL;
   sizer = 0;
}

dynArr::dynArr(int s){
    data = new int[s];
    sizer = s;
}
dynArr::~dynArr(){
  delete[] data;
}
void dynArr::setValue(int ind, int val ){
     data[ind] = val;
}

int dynArr::getValue(int ind){
   return data[ind];
}

void dynArr::allocate(int s){
   int *ptr = new int[s];
   for(int i=0; i<sizer; i++){

    *(ptr+i) = *(data+i);
   }

   delete[] data;
   data = ptr;
   //delete[] ptr;
   ptr = NULL;
   delete ptr;
}
