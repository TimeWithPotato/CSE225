#include<bits/stdc++.h>
#include "Student.h"
#include "Student.cpp"
#define marhaba ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
using namespace std;
template <class T, class X, class Z>
void print(Student<T,X,Z> u){
     int length = 5;

     for(int i=0; i<length; i++){
       u. GetItem(i);
     }
}

int main(){
  marhaba;

  Student<int,string,double> u;

  u.Insert(15234,"Jon", 2.6);
  u.Insert(13732, "Tyrion", 3.9);
  u.Insert(13569, "Sandor", 1.2);
  u.Insert(15467, "Ramsey", 23.1);
  u.Insert(16285, "Arya", 3.1);

  print(u);
}
