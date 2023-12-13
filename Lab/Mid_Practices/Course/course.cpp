#include<bits/stdc++.h>
#include "course.h"
using namespace std;



template<class x,class y>

course<x,y>::course(x a){
    coursename = NULL;
    student = new y[5];
    numberOfStudents = 0;
    coursename = new x;
    *coursename = a;
}

template<class x,class y>
x course<x,y>::getCourseName(){

    return *coursename;
}
template<class x,class y>
void course<x,y>::addStudent(y a){
   student[numberOfStudents] = a;
   numberOfStudents++;
}
//template<class x,class y>
////void course<x,y>::dropStudent(y a){
////    int counts = 0;
////     y temp = new y[numberOfStudents -1];
////     for(auto s : *student){
////        if(s.equal(a))
////            continue;
////        temp[counts] = s;
////        counts++;
////
////     }
////     student = temp;
////     temp = NULL;
////     delete[] temp;
////}

template<class x,class y>
auto  course<x,y>::getStudent(){
   return student;
}

template<class x,class y>
int course<x,y>::getNumberOfStudent(){
    return numberOfStudents;
}

