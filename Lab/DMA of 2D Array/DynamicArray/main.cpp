#include<bits/stdc++.h>
using namespace std;
int main(){
   int row , col;

   cout<<"Enter row and coloumn: "<<endl;
   cin>>row>>col;

   int **arr = new int*[row];

   for(int i=0; i<row; i++){
       *(arr+i) = new int[col];
   }

   for(int i=0; i<row; i++){
     for(int j=0; j<col; j++){
        *(*(arr+i)+j) = i+j;
     }
   }
    cout<<"The element is "<<endl;
   for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
        cout<<*(*(arr+i)+j)<<" ";
      }
      cout<<endl;
   }

   for(int i=0; i<row; i++){
     delete[] arr[i];
   }

   delete[] arr;

   cout<<arr<<endl;


}
