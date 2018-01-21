#include <iostream>
#include "stack.hpp"



using namespace std;

Stack::Stack(){
      topOfStack=NULL;
    }
    //Dizide eleman varmi
    bool Stack::isEmpty()const{
      return topOfStack==NULL;
    }
    //Sona Eleman ekle
    void Stack::push(const ArrayList& item){
        topOfStack=new Dugum(item,topOfStack);
    }
    //Sondan Elan Cikar
    void Stack::pop(){
      Dugum *temp=topOfStack;
      topOfStack=topOfStack->next;
      delete temp;
    }

    ArrayList& Stack::top()const{
      return topOfStack->item;
    }



    void Stack::makeEmpty(){
      while(!isEmpty()){
        pop();
      }
    }

    Stack::~Stack(){
      makeEmpty();
    }
