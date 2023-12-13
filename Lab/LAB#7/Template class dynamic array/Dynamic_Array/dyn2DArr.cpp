#include<bits/stdc++.h>
#include "dyn2DArr.h"
using namespace std;
template <class T>
dyn2DArr<T>::dyn2DArr(int col, int row){

    this->row = row;
    this->col = col;

      arr = new T*[col];
      for(int i=0; i<row; i++){
        *(arr+i) = new T[row];
      }
}
template <class T>
dyn2DArr<T>::~dyn2DArr(){
    for(int i=0; i<row; i++){
        delete[] arr[i];
    }

    delete[] arr;
}
template <class T>
void dyn2DArr<T>::setValue(int row, int col, T val){
      *(*(arr+row)+col) = val;
}
template <class T>
T dyn2DArr<T>::getValue(int row,int col){
    return *(*(arr+row)+col);
}
