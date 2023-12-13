#include<bits/stdc++.h>
#include "stack.h"
#include "stack.cpp"

using namespace std;
bool isBalanced(string expr){
      StackType<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }

        if (s.IsEmpty())
            return false;

        switch (expr[i]) {
        case ')':
            x = s.Top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            x = s.Top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            x = s.Top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (s.IsEmpty());



}

int main(){
  StackType<int> st,temp;
  if(st.IsEmpty()){
    cout<<"Stack is Empty"<<'\n';
  }
  cout<<"Stack is not Empty"<<'\n';

  st.push(5);
  st.push(7);
  st.push(4);
  st.push(2);

  if(st.IsEmpty()){
    cout<<"Stack is Empty"<<'\n';
  }
  else
  cout<<"Stack is not Empty"<<'\n';

  if(st.IsFull()){
    cout<<"Stack is  Full"<<'\n';
  }
  else
    cout<<"Stack is not Full"<<'\n';
  int t;
   while(!st.IsEmpty()){
    t=st.Top();
    temp.push(t);
    st.pop();
    cout<<t<<" ";
   }
   cout<<endl;

   while(!temp.IsEmpty()){
    t=temp.Top();
    temp.pop();
    st.push(t);
   }
   st.push(3);
   if(st.IsFull()){
    cout<<"Stack is full"<<'\n';
   }
   else
    cout<<"Stack is not full"<<'\n';
   st.pop();
   st.pop();

   cout<<st.Top()<<'\n';
   string str1 = "()";
    cout << endl;
    cout << str1<<": ";
    if (isBalanced(str1))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;


    str1 = "(())()(()())()";
    cout << endl;
    cout << str1<<": ";
    if (isBalanced(str1))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;


    str1 = "(())()((()";
    cout << endl;
    cout << str1 << ": ";
    if (isBalanced(str1))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    str1 = "(())))((()";
    cout << endl;
    cout << str1 << ": ";
    if (isBalanced(str1))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    system("pause");
    return 1;
}
