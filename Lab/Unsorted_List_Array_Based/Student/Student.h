#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
const int MAX_ITEMS = 5;
template <class T, class X, class Z>
class Student{

public :
    Student();
    void Insert(T,X,Z);
    void Delete(T);
    void Retrieve(T);
    void GetItem(int);
private :
    int length;
    int currentPos;
    T id[MAX_ITEMS];
    X name[MAX_ITEMS];
    Z cgpa[MAX_ITEMS];


};


#endif // STUDENT_H_INCLUDED
