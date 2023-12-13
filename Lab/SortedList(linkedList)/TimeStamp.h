#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
#include <iostream>

class timeStamp {
private:
    int s, m, h;

public:
    timeStamp();
    timeStamp(int s, int m, int h);
    bool operator==(timeStamp);
    bool operator!=(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);
    friend std::ostream &operator<<(std::ostream &, timeStamp &);
};

#endif // TIMESTAMP_H_INCLUDED
