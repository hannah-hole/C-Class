#ifndef Stack__hpp
#define Stack__hpp
#include "StackI.hpp"
using namespace std;
#include<iostream>
#include<stdio.h>

template <typename T> class Stack:StackI<T>{ 

protected:
    int top_stack=0;
    int n_elements;
    int size;
    T elements [0]; //stack elements init with 0**?!
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
    void push (T t){
        if(n_elements>=0 && n_elements<size){ //number of elements is positive 
            elements[top_stack++]=t;
            n_elements++;
        }
    } 
    //pop method, remove element on top stack 
    void pop(){
            if(n_elements>0){
                --top_stack;
                --n_elements;
            }
    }
    //returns the element on the top of stack
    T top(){
        if(n_elements>0){
            return elements[top_stack];
        }
        else  return elements[0];
    }

    void print(){
        if(n_elements==0){
            cout<<"The stack is empty"<<endl;
        }
        else{
            for(int i=top_stack-1;i>=0; i--){
                if(i==top_stack-1)
                    cout<<"top of stack\t";
                else
                    cout<<"\t\t";
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