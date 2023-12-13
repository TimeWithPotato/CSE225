#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class SortedList{
public:
   struct NodeType{
      int id,semester;
      string name,department,email;
      double cgpa,credit;
      NodeType* next;

   }st;
       SortedList();
       ~SortedList();
       int LengthIs();
       bool IsFull();
       void MakeEmpty();
       void InsertItem(NodeType);
       void RetrieveItem(NodeType&, bool&,int);
       void DeleteItem(int,bool &);
       void ResetList();
       void GetNextItem(NodeType&);
       void sets(int,int,string,string,string,double,double);
       int getId();
       int getSemester();
       string getName();
   private:
    NodeType* listData;
    int length;
    NodeType* currentPos;


};


#endif // SORTEDLIST_H_INCLUDED
