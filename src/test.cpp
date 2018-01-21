#include <iostream>
#include <ctime>
#include "Sayi.hpp"


using namespace std;

int main(){
  int sayi1;
  int sayac=1;
  int secim=1;
  Sayi *sayi=new Sayi();
  //CLOCKS_PER_SEC*=1000000;
  clock_t dur;
  clock_t say;

  while(true)
  {
    system("cls");
    cout<<"1.Faktoriel Hesaplama"<<endl;
    cout<<"2.Cikis"<<endl;
    cout<<"Seciminiz: ";
    cin>>secim;

    if(secim==1)
    {
      cout<<"Faktorielini almak istediginiz sayini giriniz:";
      cin>>sayi1;

      if(sayi1==0)
      {
        cout<<sayi1<<"!="<<1<<endl;
        cout<<"Devam Etmek Icin bit tusa basin";
        cin.ignore();
        cin.get();
        continue;
      }
      say=clock();
      sayi->Faktoriel(sayi1);
      dur=clock();
      cout<<"Hesaplama suresi : "<<(double)(dur-say)/CLOCKS_PER_SEC*1000000000<<" nanosaniye"<<endl;
      cout<<"Devam etmek icin tusa basin";
    }
    else if(secim==2)
    {
      cout<<"Cikis yaptiniz";
      break;
    }
    else
    {
      cout<<"Hatali Secim"<<endl;
      cout<<"Devam Etmek Icin bit tusa basin";
    }
    cout<<endl;
    system("pause");
  }
  delete sayi;
  return 0;
}
