#include<bits/stdc++.h>
#include "timeStamp.h"
//#include "timeStamp.cpp"
#include "SortedType.h"
#include "SortedType.cpp"
using namespace std;


   template<class T>
void Print(SortedType<T> u) {
    u.ResetList();                    // Print function
    int length = u.LengthIs();
    T value;
    for (int i = 0; i < length; i++) {
        u.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;
}

int main() {

    SortedType<timeStamp> st;                    // Create a list of objects of class "timeStamp"

    timeStamp t1(15, 34, 23);                    // Insert 5 time values in the format ssmmhh
    st.InsertItem(t1);
    st.ResetList();
    timeStamp t2(13, 13, 02);
    st.InsertItem(t2);
    st.ResetList();
    timeStamp t3(43, 45, 12);
    st.InsertItem(t3);
    st.ResetList();
    timeStamp t4(25, 36, 17);
    st.InsertItem(t4);
    st.ResetList();
    timeStamp t5(52, 02, 20);
    st.InsertItem(t5);
    st.ResetList();
    Print(st);
    timeStamp temp(25, 36, 17);              // Delete the timestamp "25  36  17"
    st.DeleteItem(temp);

    Print(st);                                   // Print the list

    return 0;
}

