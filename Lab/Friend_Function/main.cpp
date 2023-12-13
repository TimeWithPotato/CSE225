#include <iostream>
#include"Car.h"
#include"Truck.h"
int sp_greater(Car c, Truck t){
  return c.speed-t.speed;
}

using namespace std;

int main()
{
    Car c1(6,55), c2(2,120);
    Truck t1(10000,55), t2(20000,72);

    cout<<"Comparing c1 and t1\n";
    int t = sp_greater(c1,t1);

    cout<<t;

    cout<<"\nComparing c2 and t2\n";
    t = sp_greater(c2,t2);
    cout<<t;
    return 0;
}
