#include <iostream>
#include "Sayi.hpp"
using namespace std;

Sayi::Sayi()
{
  yigit=new Stack();
  dizi=new ArrayList();
  yedek=new Stack();
  dizi->insert(0,1);
  yigit->push(*dizi);
}

void Sayi::Faktoriel(int parametre)
{
  pry=eldeFaktoriel;
  if(eldeFaktoriel==0)
  {
    for(int i=1;i<=parametre;i++)
    {
      Carpma(i);
    }
    cout<<parametre<<"!="<<EkranaCikar()<<endl;
  }
  else if(eldeFaktoriel==parametre)
  {
    cout<<parametre<<"!="<<EkranaCikar()<<endl;
  }
  else if(eldeFaktoriel!=0 && eldeFaktoriel<parametre)
  {
    for(int i=eldeFaktoriel+1;i<=parametre;i++)
    {
      Carpma(i);
    }
    cout<<parametre<<"!="<<EkranaCikar()<<endl;
  }
  else if(eldeFaktoriel!=0 && eldeFaktoriel>parametre)
  {
    for(int i=eldeFaktoriel;i>parametre;i--)
    {
      yedek->push(yigit->top());
      yigit->pop();
    }
    cout<<parametre<<"!="<<yigit->top()<<endl;
    for(int i=eldeFaktoriel+1;i<=pry;i++)
    {
      yigit->push(yedek->top());
      yedek->pop();
    }
  }
  eldeFaktoriel=parametre;
}

void Sayi::Carpma(int prm)
{
  dizi=new ArrayList();
  for(int i=0;i<yigit->top().length();i++)
  {
    dizi->add(yigit->top().elementAt(i));
  }

  basamak=dizi->length()-1;
  for(int i=dizi->length()-1;i>=0;i--)
  {
    sonuc=dizi->elementAt(basamak-i)*prm+rem;
    dizi->removeAt(basamak-i);
    dizi->insert(basamak-i,sonuc%10);
    rem=sonuc/10;
  }
  if(rem!=0)
  {
    while(rem>=10)
    {
      dizi->add(rem%10);
      rem/=10;
    }
    dizi->add(rem);
  }
  rem=0;
  sonuc=0;
  yigit->push(*dizi);

}

ArrayList& Sayi::EkranaCikar()
{
  yigit->top();
}

Sayi::~Sayi()
{
  delete dizi;
  delete yigit;
  delete yedek;
}
