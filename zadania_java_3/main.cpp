#include <QCoreApplication>
#include <iostream>
#include "lzesp.h"
#include "lzesp2.h"
#include "vehicle.h"
#include "car.h"
#include "suv.h"
#include "animal.h"
#include "fish.h"
#include "mammal.h"
#include "goldfish.h"
#include "human.h"
#include "procesor.h"
#include "zadanie1.h"
#include "zadanie2.h"
#include "procesor_lista.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<< "Klasa LZesp bazowa\n";
    LZesp l0;
    LZesp l1(5.5,15.0);
    LZesp l2(3.0,13.0);

    cout<<"L1: ";l1.pisz();
    cout<<"L2: ";l2.pisz();

    cout<<"L2 Re = "<<l2.getRe()<<endl;
    cout<<"L1+L2= ";l1.plus(l2)->pisz();
    cout<<"L1-L2= ";l1.minus(l2)->pisz();
    cout<<"L1*L2= ";l1.razy(l2).pisz();
    cout<<"L1: ";l1.pisz();
    l1 = LZesp(100,100);
    cout<<"L1: ";l1.pisz();
    cout<<"L1*L2= ";l1.razy(l2).pisz();
    cout<<"L1: "<<l1.jakoLancuch().toStdString()<<endl;
    cout<<"Klasa LZesp2 pochodna\n";
    LZesp2 lp1;
    LZesp2 lp2(33,44);
    cout<<"Lp1: ";lp1.pisz();
    cout<<"Lp2: ";lp2.pisz();
    cout<<"Lp2+L1= ";lp2.plus(l1)->pisz();
    LZesp2 lp3(l2);
    cout<<"L2: ";lp3.pisz();
    lp1.pisz();
    lp2.pisz();
    lp3 = LZesp2(0,136987);
    LZesp2(l1).pisz();
    lp3.pisz();
    l0.pisz();
    l0.plus(lp2)->razy(l2).minus(lp1)->plus(lp3)->razy(l2).pisz();
    cout<<"Klasa Vehicle bazowa\n";
    Vehicle v("silnik",4);
    v.startEngine();
    cout<< "Klas Car\n";
    Car c = Car("auto");
    c.startEngine();
    c.refuel(45);
    cout<< "Klasa SUV\n";
    SUV *sv = new SUV("Terenowka");
    sv->startEngine();
    sv->wlacz4x4();
    SUV s1("Ter2");
    SUV *s=&s1;
    s->refuel(88);
    s->startEngine();
//    Vehicle v1 = Vehicle("Pojazd", 4);
////    Vehicle *v1 = dynamic_cast<Car>(Vehicle("pojazd",4));
//    Vehicle v2 = static_cast<Vehicle>(Car("auto"));
////    v2.refuel(888);
//    Car c1 = Car("Auto");
//    Vehicle* wv1;
//    Car* wc1 = (Car*)&v1;
//    v1=c1;
//    wv1=&c1;
    Vehicle v1 = Car("Pojazd");
    Vehicle *wv1;
    wv1=&v1;
    cout<<reinterpret_cast<Car*>(wv1)<<endl;
    wv1 = dynamic_cast<Car*>(wv1);
    // w c++ nie można wykonać rzutowania tak jak w javie
    Animal an = Animal("Zwierz",100,20000);
    an.toString();
    Fish fs = Fish(4,true, "Ryba",70,20000,true);
    fs.toString();
    Mammal ma = Mammal(4,false,"Ssak", 100, 200, true);
    ma.toString();
    GoldFish gf = GoldFish("Rybka",6,true,"Ryba",80,100,false);
    GoldFish *wgf;
    wgf=&gf;
    gf.toString();
    Human *hm = new Human("Franek",2,false,"Czlowiek",40,500,true);
    hm->toString();
    cout<< "\nKlasa abstrakcyjna Animal z funkcja wirtualna toString. Tablica wskaznikow:\n"<<endl;
    Animal *anim[10];
    anim[0]=&an;
    anim[1]=&fs;
    anim[2]=&ma;
    anim[3]=wgf;
    anim[4]=hm;
    for(int i=0;i<5;i++)
        anim[i]->toString();
    cout<< "ZADANIA:"<<endl;
    Procesor p(6);
    Zadanie1 z1 = Zadanie1();
    Zadanie2 z2 = Zadanie2(5);
    Zadanie2 z3 = Zadanie2(3);
    Zadanie z;
    p.dodajZadanie(&z);
    p.dodajZadanie(&z1);
    p.dodajZadanie(&z2);
    p.dodajZadanie(&z1);
    p.dodajZadanie(&z3);
    p.wykonajZadanie();
    Procesor_lista pl(6);
    Zadanie1 zl1 = Zadanie1();
    Zadanie2 zl2 = Zadanie2(15);
    Zadanie2 zl3 = Zadanie2(13);
    Zadanie zl;
    pl.dodajZadanie(&zl);
    pl.dodajZadanie(&zl1);
    pl.dodajZadanie(&zl2);
    pl.dodajZadanie(&zl1);
    pl.dodajZadanie(&zl3);
    pl.dodajZadanie(&zl1);
    pl.wykonajZadanie();
    pl.usunZadania();


    return a.exec();
}
