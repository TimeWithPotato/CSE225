


#include<bits/stdc++.h>
#include "unsorted.h"
using namespace std;
template<class T>
unsorted<T>::unsorted(){
  listData = nullptr;
  currentPos = nullptr;
  length = 0;
}
template<class T>
unsorted<T>::~unsorted(){
  MakeEmpty();
}
template<class T>
bool unsorted<T>:: IsFull(){
  NodeType* location;
  try{
      location = new NodeType;
      delete location;
      return false;
  }
    catch (bad_alloc &exception) {
        return true;
    }
}
template<class T>
int unsorted<T>::LengthIs(){
   return length;
}

template<class T>
void unsorted<T>::MakeEmpty(){
   NodeType* temp;
   while(listData!=nullptr){
    temp = listData;
    listData = listData->next;
    delete temp;
   }
   length =0;
}

template<class T>
void unsorted<T>::RetrieveItem(T& item, bool& found){
     NodeType* location = listData;
     bool moreToSearch = (location !=nullptr);
     found = false;
     while(!found && moreToSearch){
        if(item == location->info){
            found = true;
        }
        else{
            location = location->next;
            moreToSearch = (location != nullptr);
        }
     }

}

template<class T>
void unsorted<T>:: InsertItem(T item){
    NodeType* location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;

}
template<class T>
void unsorted<T>::DeleteItem(T item){
  NodeType* location = listData;
  NodeType* temp = nullptr;
  if(item == location->info){
    temp->next = listData;
    listData = listData->next;
    length--;
    delete temp;
    return;
  }
  while((location->next != nullptr) && (item != (location->next)->info)){
    location = location->next;
  }

  if(location->next != nullptr){
    temp = location->next;
    location->next = (location->next)->next;
    delete temp;
    length--;
    return;

  }
}
template<class T>
void unsorted<T>::ResetList(){
   currentPos=nullptr;
}
template<class T>
void unsorted<T>:: GetNextItem(T& item){
     if(currentPos == nullptr)
        currentPos = listData;
     else{
        currentPos =currentPos->next;
     }

     item = currentPos->info;
}
