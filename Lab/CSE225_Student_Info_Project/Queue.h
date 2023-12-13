#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class FullQueue{
    const char* errorMessage;;
public :
    FullQueue(){
      errorMessage = "Queue is Full";
    }
    const char* getErrorMessage() const{
        return errorMessage;
    }
};

class EmptyQueue{
    const char* errorMessage;
    public:
    EmptyQueue(){
      errorMessage = "Queue is Empty";
    }
    const char* getErrorMessage() const{
        return errorMessage;
    }
};
class Queue{
public:
  struct Node{
      int id,semester;
      string name,department,email;
      double cgpa,credit;
      Node* next;
  };
     Queue();
    ~Queue();
    void MakeEmpty();
    void Enqueue(Node);
    void Dequeue(Node&);
    bool IsEmpty();
    bool IsFull();
    void sets(int, int, string, string, string, double);
    int LengthIs();
private:
    Node *rear, *fronts;
    int length;


};


#endif // QUEUE_H_INCLUDED
