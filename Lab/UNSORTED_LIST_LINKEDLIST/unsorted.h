#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED

template <class T>
class unsorted{
    struct NodeType{
       T info;
       NodeType* next;
    };
public:
    unsorted();
    ~unsorted();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(T&,bool&);
    void InsertItem(T);
    void DeleteItem(T);
    void ResetList();
    void GetNextItem(T&);
private :
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTED_H_INCLUDED
