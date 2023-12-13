#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;

template <class item>
class unsortedtype{
public :
    unsortedtype();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(item);
    void DeleteItem(item);
    void RetrieveItem(item&, bool&);
    void ResetList();
    void GetNextItem(item&);

private :
    int length;
    item info[MAX_ITEMS];
    int currentPos;


};


#endif // UNSORTEDTYPE_H_INCLUDED
