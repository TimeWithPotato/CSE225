#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED

enum RelationType {LESS,EQUAL,GREATER};
template<class ItemType>
class itemtype{
    RelationType ComparedTo(ItemType) const;
private :
    int value;
};

#endif // ITEMTYPE_H_INCLUDED
