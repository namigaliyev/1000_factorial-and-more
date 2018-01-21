#ifndef SAYI_HPP
#define SAYI_HPP
#include <ctime>
#include "ArrayList.hpp"
#include "stack.hpp"
using namespace std;

class Sayi{
  public:
    Stack *yigit;
    ArrayList *dizi;
    Stack *yedek;
    int sonuc=1;
    int rem=0;
    int basamak=0;
    int eldeFaktoriel=0;
    int pry=0;
    Sayi();
    void Carpma(int prm);
    ArrayList& EkranaCikar();
    void  Faktoriel(int parametre);
    void Bolme(int prm);
    ~Sayi();
};

#endif
