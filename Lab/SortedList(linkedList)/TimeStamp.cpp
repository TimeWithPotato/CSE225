#include "timeStamp.h"

timeStamp::timeStamp() {
    s = 0;
    m = 0;
    h = 0;
}

timeStamp::timeStamp(int s, int m, int h) {
    this->s = s;
    this->m = m;
    this->h = h;
}
bool timeStamp:: operator != (timeStamp t){
   if((s!=t.s) || (m != t.m) || ( h != t.h))
    return true;
   else
    return false;
}
bool timeStamp::operator==(timeStamp t) {
    if ((s == t.s) && (m == t.m) && (h == t.h))
        return true;
    else
        return false;
}

bool timeStamp::operator<(timeStamp t) {
    if ((h < t.h) || ((h == t.h) && (m < t.m)) || ((h == t.h) && (m == t.m) && (s < t.s)))
        return true;
    else
        return false;
}

bool timeStamp::operator>(timeStamp t) {
    if ((h > t.h) || ((h == t.h) && (m > t.m)) || ((h == t.h) && (m == t.m) && (s > t.s)))
        return true;
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, timeStamp &t) {
    os << t.s << ":" << t.m << ":" << t.h;
    return os;
}
