#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
template <class x, class y>
class course{
    x *coursename;
    y *student;
    int numberOfStudents;

public:
    course();
    course(x a);
    x getCourseName();
    void addStudent(y a);
    void dropStudent(y a);
    auto getStudent();
    int getNumberOfStudent();
};


#endif // COURSE_H_INCLUDED
