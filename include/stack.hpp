#ifndef STACK_HPP
#define STACK_HPP
#include "dugum.hpp"
using namespace std;

class Stack{
  private:

  public:
    Dugum* topOfStack;

    Stack();
    //Dizide eleman varmi
    bool isEmpty()const;
    //Sona Eleman ekle
    void push(const ArrayList& item);
    //Sondan Elan Cikar
    void pop();

    ArrayList& top()const;

    void makeEmpty();

    ~Stack();

};

#endif
