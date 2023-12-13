#include "UnsortedType.h"

template <class T>
UnsortedType<T>:: UnsortedType(){
   length = 0;
   currentPos = -1;
}

template <class T>
void UnsortedType<T>:: MakeEmpty(){
    length = 0;
}
template <class T>
bool UnsortedType<T>::IsFull(){
   return (length == MAX_ITEMS);
}
template <class T>
int UnsortedType<T>::LengthIs(){

  return length;
}

template <class T>
void UnsortedType<T>::ResetList(){
  currentPos = -1;
}
template <class T>
void UnsortedType<T>::GetNextItem(T& item){
    currentPos++;
    item = info[currentPos];
}
template <class T>
void UnsortedType<T>::RetrieveItem(T& item , bool& found){
   int location =0;
   bool moreToSearch = (location<length);
   found = false;

   while(moreToSearch && !found){
    if(item == info[location]){
        found = true;
        item = info[location];
    }
    else{
        location++;
        moreToSearch = (location < length);
    }
   }
}

template <class T>
void UnsortedType<T>::InsertItem(T item){
    info[length] = item;
    length++;
}

template <class T>
void UnsortedType<T>::DeleteItem(T item){
    int location =0;
    while(item!=info[location])
    {
      location++;
    }

    info[location] = info[length-1];
    length--;
}
