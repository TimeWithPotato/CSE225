#include<bits/stdc++.h>
#include "unsortedtype.h"
#include "source.cpp"

using namespace std;
template<class T>
void print(unsortedtype<T> &u){
    T val;
    for(int i=0; i< u.LengthIs(); i++){
        u.GetNextItem(val);
        cout<<val<<" ";
    }
    cout<<endl;

}
int main()
{
    unsortedtype<int>u;
    u.InsertItem(5);
    u.InsertItem(7);
    u.InsertItem(6);
    u.InsertItem(9);

    print(u);
    return 0;
}
