#include "chambre.h"

chambre::chambre()
{
    //ctor
}

chambre::chambre(int id,string typ,double pri)
{
chambre::id=id;
chambre::type=typ;
chambre::prix=pri;
}

chambre::~chambre()
{
    //dtor
}

int chambre::getID()
{
return chambre::id;
}

double chambre::getPrix()
{
return chambre::prix;
}

string chambre::getType()
{
return chambre::type;
}

void chambre::setID(int id)
{
chambre::id=id;
}

void chambre::setPrix(double pri)
{
chambre::prix=pri;
}

void chambre::setType(string typ)
{
chambre::type=typ;
}
