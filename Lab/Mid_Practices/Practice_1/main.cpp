#include<bits/stdc++.h>
#include "practice_1.h"
#include "practice_1.cpp"

using namespace std;
int main(){
   practice_1<int,string> ob(190,"Arif");

   practice_1 <int, string> ob_1 ;

   ob_1.set_method(20,"CAr");

   cout<<ob.getX()<<" "<<ob.getY()<<endl;

   cout<<ob_1.getX()<<" "<<ob_1.getY()<<endl;


}
