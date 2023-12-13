#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a number" << endl;
    int num;
    cin>>num;
    if(num>0)
    {
        cout<<"the number is greater than  zero"<<endl;
    }
    else if(num==0)
    {
        cout<<"the number is equal to zero"<<endl;
    }
    else
    {
        cout<<"the number is smaller than  zero";
    }
    cout<<"the number you entered is: "<<num<<endl;
    cout<<"end of program"<<endl;

    cout<<"printing 0 to 9 using for loop"<<endl;
    for(int counter=0; counter<10; counter++)
    {
        cout<<counter<<endl;
    }

    cout<<"printing 0 to 9 using while loop"<<endl;
    int i=0;
    while(i<10)
    {
        cout<<i<<endl;
        i++;
    }

    cout<<"printing 0 to 9 using do-while loop"<<endl;
    int j=0;
    do
    {
        cout<<j<<endl;
        j++;
    }
    while(j<10);


    return 0;
}
