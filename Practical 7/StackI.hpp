#ifndef StackI__hpp
#define StackI__hpp
//#include<stdio.h>

template<typename T> class StackI{ //template class depending on generic template type T . create an interface 
    public: //member functions, init to 0
        virtual void push(T t)=0; //variable t (top most element), of type T 
        virtual void pop()=0;//pure virtual function (no function definition)
        virtual T top()=0; //an array 
        virtual bool isEmpty()=0;
        virtual void print()=0;
};
#endif