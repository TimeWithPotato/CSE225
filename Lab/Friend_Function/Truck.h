#ifndef TRUCK_H_INCLUDED
#define TRUCK_H_INCLUDED
#include"Car.h"
class Truck{
  int weight;
  int speed;
  public:
      Truck(int,int);
      friend int sp_greater(Car,Truck);

};

#endif // TRUCK_H_INCLUDED
