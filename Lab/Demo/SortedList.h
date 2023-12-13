#ifndef SORTEDLIST_H
#define SORTEDLIST_H

template <class T>
class SortedList {
public:
    SortedList();
    ~SortedList();

    void insert(T item);
    void remove(T item);
    bool search(T item);
    void display();

private:
    struct Node {
        T info;
        Node* next;
        Node(T data) : info(data), next(nullptr) {}
    };

    Node* head;

    // Other necessary private functions.
};

#endif
