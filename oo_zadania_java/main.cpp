#include <iostream>
#include "Human.h"
#include "Prostokat.h"
#include "MyNumber.h"
#include "Pracownik.h"
#include "Firma.h"
#include "Forum.h"
#include "Lista.h"
#include "Punkt2D.h"
#include "Punkt3D.h"
#include "ListaTab.h"

using namespace std;

int main()
{
    Human h(105);
    h.setWaga(85);
    cout<<"Waga wynosi: "<<h.getWaga()<<endl;
    Human h1(66);
    h1.setWiek();
    h1.getWiek();
    cout<<"Waga wynosi: "<<h1.getWaga()<<endl;
    cout<< "Plec: "<<h.getPlec()<<endl;
    h.setPlec(1);
    cout<< "Plec: "<<h.getPlec()<<endl;
    cout<< "\n\n";
    Prostokat p1;
    cout<<"Pole wynosi: "<<p1.pole()<<endl;
    p1.SetDl(12);
    p1.SetSzer(24);
    cout<<"Pole wynosi: "<<p1.pole()<<endl;
    cout<<"Obwod wynosi: "<<p1.obwod(13,15)<<endl;
    cout<< "\n\n";
    Prostokat p2;
    p2.przekatna();
    p2.SetSzer(33);
    p2.SetDl(44);
    //konstruktor kopiujacy
    Prostokat p3(p1);
    //Prostokat* p4 = new Prostokat(p2); //dynamiczne allokowanie pamiêci jest wolniejsze
    Prostokat p4(p2);
    Prostokat *wp4 = &p4;
    cout<<"Aktualna dlugosc: "<<wp4->GetDl()<<endl;
    cout<<"Aktualna szerokosc: "<<wp4->GetSzer()<<endl;
    cout<<"Pole: "<<wp4->pole()<<endl;
    //delete wp4;
    cout<< "\n\n";
    srand(time(NULL));
    MyNumber m, x, y;
    MyNumber *wm, *wx, *wy;
    wm=&m;
    wx=&x;
    wy=&y;
    cout<<m.getN()<<" "<<x.getN()<<" "<<y.getN()<<endl;
    cout<<wm->getN()<<" "<<wx->getN()<<" "<<wy->getN()<<endl;
    cout<< "Czy parzyste m,x,y: "<<wm->isEven()<<" "<<wx->isEven()<<" "<<wy->isEven()<<endl;
    cout<< "Czy nieparzyste m,x,y: "<<m.isOdd()<<" "<<x.isOdd()<<" "<<y.isOdd()<<endl;
    cout<< "Pierwiastek kwadratowy m,x,y: "<<wm->pierwiastek()<<" "<<wx->pierwiastek()<<" "<<wy->pierwiastek()<<endl;
    cout<<"Potega przy wykladniku x="<<wx->getN()<<" wynosi: "<<wm->potega(wx)<<endl;
    cout<<"Potega przy wykladniku y="<<wy->getN()<<" wynosi: "<<wm->potega(& y)<<endl;
    cout<< "Suma atrybut0w m+x "<<wm->add(wx)<<endl;
    cout<< "Roznica atrybutow m-y "<<wm->subtract(& y)<<endl;
    cout<< "Roznica atrybutow x-y "<<wx->subtract(wy)<<endl;
    cout<< "\n\n";
    srand(time(NULL));
    Firma f;
    Firma* wf = &f;
    wf->pr.wypisz();
    wf->pr1.wypisz();
    wf->pr2.wypisz();
    wf->wpr3->wypisz();
    Pracownik pr;
    f.wyswietl(&pr, "Anna", "Maloznana");
    cout<< "\n\n";
    Forum fo;
    fo.loguj();
    fo.loguj();
    fo.wypisz();
    fo.ilu_zalog();
    cout<< "\n\n";
    Lista l;
    l.dodajElement(9);
    l.dodajElement(13);
    l.dodajElement(77);
    l.dodajElement(-23);
    l.dodajElement(3);
    l.dodajElement(9);
    l.dodajElement(7);
    l.dodajElement(7);
    l.dodajElement(7);
    l.dodajElement(7);
    l.dodajElement(7);
    l.ileElementow();
    l.pisz();
    l.wyszukaj(7);
    l.usunPierwszy(7);
    l.usunPowtorzenia();
    l.pisz();
    cout<< "\n\n";
    Punkt2D p2D;
    p2D.setX(13);
    p2D.setY(23);
    cout<<p2D.getX()<<" "<<p2D.getY()<<endl;
    Punkt2D p2D2(11,12);
    cout<<p2D2.getX()<<" "<<p2D2.getY()<<endl;
    Punkt3D p3D;
    cout<<"p3D "<<p3D.getX()<<" "<<p3D.getY()<<" "<<p3D.getZ()<<endl;
    p3D.setX(99);
    p3D.setZ(88);
    Punkt3D p3D1(77, 636);
    cout<<p3D.getX()<<" "<<p3D.getY()<<" "<<p3D.getZ()<<endl;
    p3D1.setX(66);
    //p3D1.setY(55);
    cout<<"p3D1 "<<p3D1.getX()<<" "<<p3D1.getY()<<" "<<p3D1.getZ()<<endl;
    cout<< "\n\n";
    ListaTab lt;
    lt.dodajElement(1);
    lt.dodajElement(4);
    lt.dodajElement(8);
    lt.dodajElement(16);
    lt.dodajElement(2);
    lt.dodajElement(8);
    lt.dodajElement(1);
    lt.dodajElement(2);
    lt.dodajElement(4);
    lt.dodajElement(8);
    lt.pisz();
    lt.usunPowtorzenia();
    cout<< "Po usunieciu powtorzen"<<endl;
    lt.pisz();
    lt.wyszukaj(4);
    lt.usunPierwszy(-93);
    lt.dodajElement(78);
    lt.pisz();
    lt.usunPierwszy(78);
    lt.pisz();


    return 0;
}
