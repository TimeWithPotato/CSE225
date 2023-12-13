#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
class Truck;
class Car{
  int passengers;
  int speed;
  public:
      Car(int,int);
      friend int sp_greater(Car,Truck);
};


#endif // CAR_H_INCLUDED
