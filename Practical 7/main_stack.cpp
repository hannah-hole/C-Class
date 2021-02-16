#include<iostream>
#include "Stack.hpp"

int main(){
    Stack<int>elements = Stack<int>(6); //calls template function. elements is the identifier.  allow for 6 elements 
    elements.print(); 
    elements.push(2);
    elements.push(4);
    elements.push(5);
    elements.push(8);
    elements.push(9);
    elements.push(7);
    elements.push(6);
    elements.print();
    elements.pop();
    elements.print();
    elements.pop();
    elements.print();
    elements.pop();
    elements.print();
    elements.pop();
    elements.print();
    elements.pop(); 
    elements.print();
    elements.pop(); 
    elements.print();

    return 0;
}