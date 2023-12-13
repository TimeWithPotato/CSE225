#include<bits/stdc++.h>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

#define marhaba ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
using namespace std;
template <class T>
void print(UnsortedType<T> ut){

    T value;
    cout<<"Printing the elements"<<endl<<endl;
    for(int i=0; i< ut.LengthIs(); i++){
        ut.GetNextItem(value);
        cout<<value<<" ";
    }

   cout<<endl<<endl;
}

template <class T>
void retrieve(UnsortedType<T> u, T value){
    bool found = false;
    u.RetrieveItem(value, found);

    if(found){
        cout<<"Item is found"<<endl<<endl;
    }
    else if(!found){
        cout<<"Item is not found"<<endl<<endl;
    }

}

int main(){

   marhaba;

   UnsortedType<int> u;
   u.InsertItem(5);
   u.InsertItem(6);
   u.InsertItem(7);
   u.InsertItem(9);

   print(u);
   cout<<"The length of the list is " <<u.LengthIs()<<endl;
   u.InsertItem(1);
   print(u);
   cout<<"The length of the list is " <<u.LengthIs()<<endl;

   retrieve(u,4);
   retrieve(u,5);
   retrieve(u,9);
   retrieve(u,10);

   cout<<u.IsFull()<<endl<<endl;

   u.DeleteItem(5);

   cout<<u.IsFull()<<endl<<endl;

   u.DeleteItem(1);

   print(u);

   u.DeleteItem(6);
   print(u);


}
