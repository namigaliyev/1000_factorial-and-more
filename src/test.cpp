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
    cout<<"1.Calculates_factorial"<<endl;
    cout<<"2.Exit"<<endl;
    cout<<"Your_choice: ";
    cin>>secim;

    if(secim==1)
    {
      cout<<"Enter the number you want to calculate:";
      cin>>sayi1;

      if(sayi1==0)
      {
        cout<<sayi1<<"!="<<1<<endl;
        cin.ignore();
        cin.get();
        continue;
      }
      say=clock();
      sayi->Faktoriel(sayi1);
      dur=clock();
      cout<<"Calculation_time : "<<(double)(dur-say)/CLOCKS_PER_SEC*1000000000<<" nanoseconds"<<endl;
    }
    else if(secim==2)
    {
      cout<<"You_logged_out";
      break;
    }
    else
    {
      cout<<"Incorrect_choice"<<endl;
    }
    cout<<endl;
    system("pause");
  }
  delete sayi;
  return 0;
}
