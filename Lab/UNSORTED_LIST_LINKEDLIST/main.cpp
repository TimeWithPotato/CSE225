#include<bits/stdc++.h>
#include"unsorted.h"
#include"unsorted.cpp"
using namespace std;
int main(){
  unsorted<int> l1,l2,l3;

  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    int v;
  cin>>v;
    l1.InsertItem(v);
  }

  cin>>n;
  for(int i=0; i<n; i++){
    int v;
    cin>>v;
    l2.InsertItem(v);
  }

  int i=l1.LengthIs(),
  j = l2.LengthIs(),value1,value2;
  l1.GetNextItem(value1);
  l2.GetNextItem(value2);

  while(i>0 && j>0){
    if(value1>value2){
        l3.InsertItem(value1);
        i--;
        if(i>0){
            l1.GetNextItem(value1);
        }
    }
    else if(value1<value2){
        l3.InsertItem(value2);
        j--;
        if(j>0){
         l2.GetNextItem(value2);
        }
    }
    else{
        l3.InsertItem(value1);
        l3.InsertItem(value2);
        i--,j--;
        if(i>0)
        l1.GetNextItem(value1);
        if(j>0)
        l2.GetNextItem(value2);
    }
  }
  while(i>0){
    l3.InsertItem(value1);
    i--;
    if(i>0)
    l1.GetNextItem(value1);

  }
  while(j>0){
    l3.InsertItem(value2);
    j--;
    if(j>0)
        l2.GetNextItem(value2);
  }

  for(int i=0; i<=l3.LengthIs()-1; i++){
    l3.GetNextItem(value1);
    cout<<value1<<" ";
  }

  cout<<"\nEnter the number you want to delete: ";
  cin>>value1;
  l3.DeleteItem(value1);
  l3.ResetList();
  for(int i=0; i<l3.LengthIs(); i++){
    l3.GetNextItem(value2);
    cout<<value2<<" ";
  }
}
