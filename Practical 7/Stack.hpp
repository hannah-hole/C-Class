#ifndef Stack__hpp
#define Stack__hpp
#include "StackI.hpp"
using namespace std;
#include<iostream>
#include<stdio.h>

//stack implements StackI interface 
template <typename T> class Stack:StackI<T>{ //template class depending on parametric type T 

protected: 
    int top_stack=0;
    int n_elements;
    int size;
    T elements [0]; //stack elements init with 0
public: 
    //constructor: stack with 20
    Stack(){
        elements [20];
        n_elements=0;
        size=20; //finite size of stack 
        top_stack=0;
    }
    //constructor: generic stack with n elements
    Stack(int n){
        elements [n];
        top_stack=0;
        n_elements=0;
        size=n;
    }
    //push method (add element to top)
    void push (T t){ //variable t is the top most element, of type T 
        if(n_elements>=0 && n_elements<size){ //if number of elements is at least 0 but less than the capacity, add an element  
            elements[top_stack++]=t; //set the first index of the elements array to t, the top most element 
            n_elements++; //add 1 to the number of elements in the stack
        }
    } 
    //pop method, remove element on top stack 
    void pop(){
            if(n_elements>0){ 
                --top_stack; //remove 1 from the index of the top of the stack 
                --n_elements; //remove 1 from the number of elements
            }
            else cout<<"The stack is empty"; 
    }
    //returns the element on the top of stack
    T top(){ 
        if(n_elements>0){ //if there are elements in the stack, return the element that is at the index top_stack 
            return elements[top_stack];
        }
        else  return elements[0];
    }

    void print(){
        if(n_elements==0){
            cout<<"The stack is empty"<<endl;
        }
        else{
            for(int i=top_stack-1;i>=0; i--){ //from the index of top element, a
                if(i==top_stack-1)
                    cout<<"top of stack\t";
                else
                    cout<<"\t\t"; //new line for each element and is tabbed
                    cout<<elements[i]<<endl; 
            }
        }
        cout<<"-----------------------"<<endl<<endl;
    }
    bool isEmpty(){
        return (n_elements==0)? true:false;
    }
};
#endif