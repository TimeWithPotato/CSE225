#include<bits/stdc++.h>
#include "course.h"
#include "course.cpp"
using namespace std;
int main(){
      course<string,string> ob("Data Structure");
      ob.addStudent("Arif");
      ob.addStudent("Mainuddin");
      course<string ,string> ob2("CSE225L");
      ob2.addStudent("Najifa");
      ob2.addStudent("Tabassum");
      string  *s = ob.getStudent();
      cout<<ob.getCourseName()<<endl;
      for(int i = 0; i<ob.getNumberOfStudent(); i++){
        cout<<s[i]<<" ";
      }
       cout<<endl;
       string *str = ob2.getStudent();
       cout<<ob2.getCourseName()<<endl;
       for(int i=0; i<ob2.getNumberOfStudent(); i++){

        cout<<str[i]<<" ";
       }

}
