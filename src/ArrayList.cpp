#include <iostream>
#include "ArrayList.hpp"
using namespace std;


ArrayList::ArrayList()
{
	elemanlar=NULL;
	elemanSayisi=0;
	kapasite=0;
}
ArrayList::ArrayList(ArrayList &sag)
{
	elemanSayisi=0;
	elemanlar=new int[sag.length()];
	kapasite=sag.length();
	for(int i=0;i<sag.length();i++)
	{
		add(sag.elementAt(i));
	}
}
		void ArrayList::reserve(int yeniKapasite)
		{
			if(kapasite>=yeniKapasite)return;

			int *yedek=new int[yeniKapasite];
			for(int i=0;i<elemanSayisi;i++)
			{
				yedek[i]=elemanlar[i];
			}
			if(elemanlar !=NULL) delete [] elemanlar;
			elemanlar=yedek;
			kapasite=yeniKapasite;
		}


		int ArrayList::length()const
		{
			return elemanSayisi;
		}
		bool ArrayList::isEmpty()const
		{
			return length()==0;
		}
		void ArrayList::add(const int& eleman)
		{
			if(elemanSayisi==kapasite)
			{
				reserve(max(1,2*kapasite));//0*2==0 ise 1 atanır değilse 1 den büyük değer atanır
			}
			elemanlar[elemanSayisi]=eleman;
			elemanSayisi++;
		}
		void ArrayList::insert(int konum,const int& eleman)
		{
			//if(konum <0 || konum>elemanSayisi) throw hata
			if(elemanSayisi==kapasite)
			{
				reserve(max(1,2*kapasite));
			}
			for(int i=elemanSayisi;i>konum;i--)
			{
				elemanlar[i]=elemanlar[i-1];
			}
			elemanlar[konum]=eleman;
			elemanSayisi++;
		}
		void ArrayList::remove(const int& eleman)
		{
			for(int i=0;i<elemanSayisi;i++)
			{
				if(elemanlar[i]==eleman)
				{
					removeAt(i);
					return;
				}
			}
			//throw elemanYokhatasi
		}
		void ArrayList::removeAt(int konum)
		{
			//if(konum<0 || konum>=elemanSayisi) throw hata
			for(int i=konum+1;i<elemanSayisi;i++)
			{
				elemanlar[i-1]=elemanlar[i];
			}
			elemanSayisi--;
		}
		int ArrayList::elementAt(int konum)
		{
			//if(konum<0 || konum>=elemanSayisi) throw hata
			return elemanlar[konum];
		}
		int ArrayList::indexOf(const int& eleman)const
		{
			for(int i=0;i<elemanSayisi;i++)
			{
				if(elemanlar[i]==eleman)
				{
					return i;
				}
			}
			//throw elemanYokhatasi
		}
		void ArrayList::clear()
		{
			elemanSayisi=0;
		}
		const int& ArrayList::first()const
		{
			//if(isEmpty()) throw hata
			return elemanlar[0];
		}
		const int& ArrayList::last()const
		{
			//if(isEmpty()) throw hata
			return elemanlar[elemanSayisi-1];
		}
		ostream& operator<<(ostream& ekran,ArrayList& sag)//friend olarak eklendigi için private alanlara erişebilir
		{
			for(int i=sag.elemanSayisi-1;i>=0;i--)
			{
				ekran << sag.elemanlar[i];
			}
			return ekran;
		}
		ArrayList::~ArrayList()
		{
			if(elemanlar==NULL) return;
			delete [] elemanlar;
		}
