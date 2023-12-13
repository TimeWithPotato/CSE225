#include "Queue.h"
#include<bits/stdc++.h>
using namespace std;


Queue::Queue(){
   rear = nullptr;
   fronts = nullptr;
   length = 0;
}


Queue::~Queue(){
  MakeEmpty();
}


void Queue::MakeEmpty(){
   Node* temp;
   temp = fronts;
   while(fronts != rear){
    fronts = fronts->next;
    delete temp;
    temp = fronts;
   }
   rear = nullptr;
}


void Queue::Enqueue(Node item){
  if(IsFull()) throw FullQueue();

  else{
    Node* newNode = new Node;
    newNode->id = item.id;
    newNode->semester = item.semester;
    newNode->name = item.name;
    newNode->department = item.department;
    newNode->email = item.email;
    newNode->cgpa = item.cgpa;
    newNode->credit = item.credit;
    newNode->next = nullptr;
    if(fronts == nullptr){
        fronts = newNode;
    }
    else{
        rear->next = newNode;
    }
    rear = newNode;
  }

  length++;
    //cout<<rear->info<<" ";
}


void Queue::Dequeue(Node& item){
   if(IsEmpty()) throw EmptyQueue();

   else{
    Node* temp;
    temp = fronts;
    item.id = fronts->id;
    item.semester = fronts->semester;
    item.name = fronts->name;
    item.department = fronts->department;
    item.email = fronts->email;
    item.cgpa = fronts->cgpa;
    item.credit=fronts->credit;
    fronts = fronts->next;
    delete temp;
    if(fronts == nullptr)
        rear = nullptr;
   }
   length--;
   //cout<<item<<" ";
}


bool Queue::IsFull(){
  Node* temp;
  try{
     temp = new Node;
     delete temp;
     return false;
  }
  catch(bad_alloc &exception){
     return true;
  }
}



bool Queue::IsEmpty(){
   return (fronts == nullptr);
}

void Queue::sets(int id, int semester, string name, string department, string email, double cgpa){

  Node node;
  node.id = id;
  node.semester = semester;
  node.name = name;
  node.department = department;
  node.email = email;
  node.cgpa = cgpa;
  Enqueue(node);

}

int Queue::LengthIs(){

    return length;

}
