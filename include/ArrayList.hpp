#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

using namespace std;



class ArrayList
{
  private:
    int *elemanlar;
		int kapasite;
    void reserve(int yeniKapasite);
  public:
    int elemanSayisi;
    ArrayList();
    ArrayList(ArrayList& sag);
    int length()const;
    bool isEmpty()const;
    void add(const int & eleman);
    void insert(int konum,const int & eleman);
    void remove(const int & eleman);
    void removeAt(int konum);
    int elementAt(int konum);
    int indexOf(const int & eleman)const;
    void clear();
    const int& first()const;
    const int & last()const;
    friend ostream & operator<<(ostream & ekran,ArrayList& sag);
    ~ArrayList();

};

#endif
