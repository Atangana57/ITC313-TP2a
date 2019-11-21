#include "hotel.h"


hotel::hotel()
{
    //ctor
}

hotel::~hotel()
{
    //dtor
}

hotel::hotel(int id,string nom,string ville,vector<chambre> chambres)
{

hotel::id=id;
hotel::nom=nom;
hotel::ville=ville;
hotel::chambres=chambres;

}


void hotel::addChambre(chambre ch)
{
hotel::chambres.push_back(ch);
}



void hotel::removeChambre(chambre ch)
{

}

vector<chambre> hotel::getChambre()
{
return hotel::chambres;
}

int hotel::getID()
{
return hotel::id;
}

string hotel::getNom()
{
return hotel::nom;
}

string hotel::getVille()
{
return hotel::ville;
}

void hotel::setID(int id)
{
hotel::id=id;
}

void hotel::setNom(string nom)
{
hotel::nom=nom;
}

void hotel::setVille(string ville)
{
hotel::ville=ville;
}
