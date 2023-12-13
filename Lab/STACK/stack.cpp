#include "stack.h"
#include<bits/stdc++.h>
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType(){
    top=-1;
}

template<class ItemType>
bool StackType<ItemType>::IsFull(){

    return (top == MAX_ITEMS-1);
}

template<class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (top == -1);
}

template<class ItemType>
void StackType<ItemType>::push(ItemType newItem){
      if(IsFull()) throw FullStack("Exception: Stack is full");
      top++;
      items[top]=newItem;

}
template<class ItemType>
void StackType<ItemType>::pop(){
     if(IsEmpty()) throw EmptyStack("Exception: Stack is Empty");
     top--;
}

template<class ItemType>
ItemType StackType<ItemType>::Top(){
   if(IsEmpty()) throw EmptyStack("Exception: Stack is Empty");

   return items[top];
}
