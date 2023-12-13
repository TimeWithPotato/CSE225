#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr
{
private:
    int *data;
    int sizer;

public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void setValue(int, int);
    int getValue(int);
};
#endif // DYNARR_H_INCLUDED
