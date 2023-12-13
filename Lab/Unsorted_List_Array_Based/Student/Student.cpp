#include "Student.h"
#include<bits/stdc++.h>
using namespace std;
template <class T, class X, class Z>
Student<T,X,Z>:: Student(){
     length =0;
     currentPos= -1;
}
template <class T, class X, class Z>
void Student<T,X,Z>:: Insert(T a, X b, Z c){
       id[length] = a;
       name[length] = b;
       cgpa[length] = c;
       length++;
}
template <class T, class X, class Z>
void Student<T,X,Z>::Delete(T a){
   int location = 0;
   while(location<this->length()){
    if(a == this->id[location])
    {
        id[location] = id[length-1];
        name[location] = name[length-1];
        cgpa[location] = cgpa[length-1];
    }
    else{
        location ++;
    }
   }
}

template <class T, class X, class Z>
void Student<T,X,Z>::Retrieve(T a){
    int location =0;
    while(location<this->length()){
        if(a == this.id[location])
        {
            cout<<this.id[location]<<" "<<this.name[location]<<" "<<this.cgpa[location]<<endl<<endl;
        }
        else{
            location++;
        }
    }
}

template <class T, class X, class Z>
void Student<T,X,Z>:: GetItem(int x){
    cout<<this->id[x]<<" "<<this->name[x]<<" "<<this->cgpa[x]<<endl<<endl;
}

