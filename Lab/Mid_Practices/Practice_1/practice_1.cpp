#include<bits/stdc++.h>
#include "practice_1.h"
using namespace std;



template<class x, class y>
practice_1<x,y>::practice_1(){
   num = new x;
   str = new y;

}


template<class x, class y>
practice_1<x,y>::practice_1(x a, y b){
    num = new x;
    str = new y;
    *num = a;

    *str = b;
}

template<class x, class y>
practice_1<x,y>:: ~practice_1(){
    delete num;
    delete str;
   cout<<"Deleting num and deleting str"<<endl;
}
template<class x, class y>
void practice_1<x,y>::set_method(x a , y b){
    *num = a;
    *str = b;
}

template<class x, class y>
x practice_1<x,y>::getX(){
    return *num;
}

template<class x, class y>
y practice_1<x,y>::getY(){
   return *str;
}
