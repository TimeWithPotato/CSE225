#ifndef DYN2DARR_H_INCLUDED
#define DYN2DARR_H_INCLUDED
template <class T>

class dyn2DArr{

   private :
       T **arr;
       int col,row;

   public :
       dyn2DArr(int,int);
       ~dyn2DArr();
       T getValue(int,int);
       void setValue(int,int,T);

};


#endif // DYN2DARR_H_INCLUDED
