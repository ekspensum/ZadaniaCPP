#include "ListaTab.h"

ListaTab::ListaTab()
{
//    ctor
    this->pojemnosc=10;
    this->rozmiar=0;
}

ListaTab::~ListaTab()
{
    //dtor
}

void ListaTab::dodajElement(int a)
{
    if(rozmiar<pojemnosc)
    {
        for(int i=rozmiar; i<=rozmiar; i++)
            this->liczby[i]=a;
        rozmiar++;
    }
    else cout<< "Lista jest pelna!"<<endl;
}

int ListaTab::znajdz(int a)
{
    for (int i=0; i<rozmiar; i++)
        if (liczby[i]==a) return i;
    return -1;
}

void ListaTab::pisz()
{
    for (int i=0; i<rozmiar; i++)
        cout<<liczby[i]<<endl;
}

void ListaTab::usunPierwszy(int a)
{
    if(znajdz(a)>=0)
    {
        int temp[pojemnosc];
        for (short i=0; i<rozmiar; i++)
        {
            if (liczby[i]==a)
            {
                rozmiar--;
                for (short j=i; j<rozmiar; j++)
                    liczby[j]=liczby[j+1];
                break;
            }
        }
    }
    else cout<< "Nie znaleziono szukanej liczby "<<a<<endl;
}

void ListaTab::usunPowtorzenia()
{
    int t=0;
    int *temp = new int[pojemnosc];
    for(short i=0; i<rozmiar; i++)
    {
        t=0;
        for(short j=0; j<rozmiar; j++)
        {
            if(liczby[i]==liczby[j])
            {
                t++;
                if(t==2)
                {
                    rozmiar--;
                    for(short k=i; k<rozmiar; k++)
                        liczby[k]=liczby[k+1];
                    t=0;
                    j=0;
                }
            }
        }
    }
}

void ListaTab::wyszukaj(int a)
{
    if(znajdz(a)>=0) cout<< "Znaleziono liczbe: "<<a<< " o indeksie: "<<znajdz(a)<<endl;
    else cout<< "Nie znaleziono szukanej liczby: "<<a<<endl;
}
