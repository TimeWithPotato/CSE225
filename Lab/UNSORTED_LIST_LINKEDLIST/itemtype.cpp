#include<bits/stdc++.h>
#include "itemtype.h"
template<class ItemType>
RelationType itemtype<ItemType>::ComparedTo(ItemType item) const{
    if(value < item) return LESS;
    else if (value > item) return GREATER;
    else
        return EQUAL;

}
