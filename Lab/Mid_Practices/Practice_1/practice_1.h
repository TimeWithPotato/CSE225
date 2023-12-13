#ifndef PRACTICE_1_H_INCLUDED
#define PRACTICE_1_H_INCLUDED
template<class x, class y>
class practice_1{
    x *num;
    y  *str;

public :
    practice_1();
    practice_1(x a, y s);
    ~ practice_1();
    void set_method(x a, y s);
    x getX();
    y getY();

};


#endif // PRACTICE_1_H_INCLUDED
