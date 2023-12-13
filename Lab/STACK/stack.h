#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
const int MAX_ITEMS = 5;

class FullStack{
   const char *errorMessage;
   public:
       FullStack(const char* message){
          errorMessage = message;
       }
       const char* GetErrorMessage() const{
         return errorMessage;
       }
};

class EmptyStack{
   const char* errorMessage;
   public :
       EmptyStack(const char* message){
          errorMessage = message;
       }
       const char* GetErrorMessage() const{
           return errorMessage;
       }
};

template< class ItemType>
class StackType{
    int top;
    ItemType items[MAX_ITEMS];

public :
    StackType();
    bool IsFull();
    bool IsEmpty();
    void push(ItemType);
    void pop();
    ItemType Top();

};

#endif // STACK_H_INCLUDED
