#include <bits/stdc++.h>
#include "SortedList.h"
using namespace std;

SortedList::SortedList() {
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

int SortedList::LengthIs() {
    return length;
}


bool SortedList::IsFull() {
    NodeType *location;
    try {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc &exception) {
        return true;
    }
}


void SortedList::InsertItem(NodeType item) {
    NodeType *newNode;
    NodeType *predLoc;
    NodeType *location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch) {
        if (location->id < item.id) {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        } else
            moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->id = item.id;
    newNode->semester = item.semester;
    newNode->name = item.name;
    newNode->department = item.department;
    newNode->email = item.email;
    newNode->cgpa = item.cgpa;
    newNode->credit = item.credit;
    if (predLoc == NULL) {
        newNode->next = listData;
        listData = newNode;
    } else {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}


void SortedList::DeleteItem(int id,bool &found) {
    NodeType *location = listData;
    NodeType *tempLocation=NULL;
    if (id == listData->id) {
        tempLocation = location;
        listData = listData->next;
        delete tempLocation;
        length--;
        found = true;
        return;

    }
    while((id!=(location->next)->id) && (location->next != NULL)){
          location = location->next;
    }
    if(location->next != NULL){
        tempLocation = location->next;
        location->next = (location->next)->next;
        delete tempLocation;
        length--;
        found = true;
        return;
    }
    else{
        found = false;
    }
}


void SortedList::RetrieveItem(NodeType &item, bool &found, int id) {
    NodeType *location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found) {
        if (id == location->id)
            found = true;
        else if (id > location->id) {
            location = location->next;
            moreToSearch = (location != NULL);
        } else
            moreToSearch = false;
    }
   if(found){
    item.id = location->id;
    item.semester = location->semester;
    item.name = location->name;
    item.department = location->department;
    item.email = location->email;
    item.cgpa = location->cgpa;
    item.credit = location->credit;
   }
}


void SortedList::MakeEmpty() {
    NodeType *tempPtr;
    while (listData != NULL) {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}


SortedList::~SortedList() {
    MakeEmpty();
}


void SortedList::ResetList() {
    currentPos = NULL;
}


void SortedList::GetNextItem(NodeType &item) {
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item.id = currentPos->id;
    item.semester = currentPos->semester;
    item.name = currentPos->name;
    item.department = currentPos->department;
    item.email = currentPos->email;
    item.cgpa = currentPos->cgpa;
    item.credit = currentPos->credit;
}

void SortedList::sets(int id,int semester,string name,string department,string email,double cgpa,double credit){

     NodeType node;
     node.id = id;
     node.semester = semester;
     node.name = name;
     node.department = department;
     node.email = email;
     node.cgpa = cgpa;
     node.credit = credit;

     InsertItem(node);

     //delete &node;

}

int SortedList::getId(){

  if(currentPos!=NULL) return currentPos->id;
  else return -1;

}

int SortedList::getSemester(){

  if(currentPos!=NULL) return currentPos->semester;
  else return -1;

}

string SortedList::getName(){

  if(currentPos!=NULL) return currentPos->name;
  else return "";

}
