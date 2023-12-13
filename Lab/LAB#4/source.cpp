#include "unsortedtype.h"
#include<bits/stdc++.h>

template <class item>
unsortedtype<item>::unsortedtype(){
      length =0;
      currentPos = -1;
}

template <class item>
void unsortedtype<item>:: MakeEmpty(){
     length =0;
}

template <class item>
bool unsortedtype<item>::IsFull(){
   return (length == MAX_ITEMS);
}

template <class item>
int unsortedtype<item>:: LengthIs(){
  return length;
}

template <class item>
void unsortedtype<item>::InsertItem(item x){
    info[length++] = x;
}
template <class item>
void unsortedtype<item>:: DeleteItem(item x){
    int loc =0;
    while(x != info[loc]){
        loc++;
    }
    info[loc]=info[loc-1];
    length--;
}

template <class item>
void unsortedtype<item>::RetrieveItem(item &x, bool &found){
     int loc=0;
     bool moreToSearch = (loc < length);
     found = false;
     while(moreToSearch && !found){
        if(x == info[loc]){
            found = true;
            x = info[loc];
        }
        else{
                loc++;
                moreToSearch = (loc < length );

        }
     }

}

template <class item>
void unsortedtype<item>:: ResetList(){
        currentPos=-1;
}
template <class item>
void unsortedtype<item>::GetNextItem(item &x){
    x = info[++currentPos];
}
