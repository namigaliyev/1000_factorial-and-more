#ifndef DUGUM_HPP
#define DUGUM_HPP
#include "ArrayList.hpp"
using namespace std;

class Dugum
{
  public:
    ArrayList item;
    Dugum *next;
    Dugum(const ArrayList &,Dugum *);
};

#endif
