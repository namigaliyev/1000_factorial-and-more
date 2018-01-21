#include <iostream>
#include "dugum.hpp"


using namespace std;

Dugum::Dugum(const ArrayList &itm=ArrayList(),Dugum *nx=NULL)
{
  item=itm;
  next=nx;
}
