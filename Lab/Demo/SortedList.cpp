#include "SortedList.h"
#include<bits/stdc++.h>
using namespace std;

template <class T>
SortedList<T>::SortedList() : head(nullptr) {}

template <class T>
SortedList<T>::~SortedList() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

template <class T>
void SortedList<T>::insert(T item) {
    Node* newNode = new Node(item);

    if (!head || item < head->info) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->info < item) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

template <class T>
void SortedList<T>::remove(T item) {
    Node* current = head;
    Node* prev = nullptr;

    while (current) {
        if (current->info == item) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
            break;
        }
        prev = current;
        current = current->next;
    }
}

template <class T>
bool SortedList<T>::search(T item) {
    Node* current = head;
    while (current) {
        if (current->info == item) {
            return true;
        }
        current = current->next;
    }
    return false;
}

template <class T>
void SortedList<T>::display() {
    Node* current = head;
    while (current) {
        std::cout << "Student Info: " << current->info << std::endl;
        current = current->next;
    }
}
