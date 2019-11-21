#include "reservation.h"

reservation::reservation()
{
    //ctor
}

reservation::reservation(int id,int idChambre,int idClient,int idHotel,double montant,date debut,date fin)
{
reservation::id=id;
reservation::idChambre=idChambre;
reservation::idClient=idClient;
reservation::idHotel=idHotel;
reservation::montant=montant;
reservation::debut=debut;
reservation::fin=fin;
    //ctor
}

reservation::~reservation()
{
    //dtor
}

void reservation::setId(int id)
{
reservation::id=id;
}

void reservation::setIdChambre(int idChambre)
{
reservation::idChambre=idChambre;
}

void reservation::setIdClient(int idClient)
{
reservation::idClient=idClient;
}

void reservation::setIdHotel(int idHotel)
{
reservation::idHotel=idHotel;
}

void reservation::setMontant(double montant)
{
reservation::montant=montant;
}

void reservation::setDebut(date debut)
{
reservation::debut=debut;
}

void reservation::setFin(date fin)
{
reservation::fin=fin;
}


date reservation::getDebut()
{
return reservation::debut;
}

date reservation::getFin()
{
return reservation::fin;
}

int reservation::getId()
{
return reservation::id;
}

int reservation::getIdChambre()
{
return reservation::idChambre;
}

int reservation::getIdClient()
{
return reservation::idClient;
}

int reservation::getIdHotel()
{
return reservation::idHotel;
}

double reservation::getMontant()
{
return reservation::montant;
}
