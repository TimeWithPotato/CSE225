#include "DynArr.h"

#include <iostream>
using namespace std;

/*returntype classname::methodname(parameter if any)
  {//methodbody}
*/
DynArr::DynArr()
{
    data = NULL;
    sizer = 0;
}
DynArr::DynArr(int s)
{
    data = new int[s];
    sizer = s;
}
void DynArr::setValue(int index, int element)
{
    data[index]=element;
}
int DynArr::getValue(int index)
{
    return data[index];
}
DynArr::~DynArr()
{
    delete [] data;
}



