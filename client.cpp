#include "client.h"

client::client()
{
    //ctor
}

client::~client()
{
    //dtor
}

client::client(int Id,string nom,string prenom,int total_reservation)
{
client::id=Id;
client::nom=nom;
client::prenom=prenom;
client::total_reservation=total_reservation;
}

void client::setId(int id)
{
client::id=id;
}

void client::setNom(string nom)
{
client::nom=nom;
}

void client::setPrenom(string prenom)
{
client::prenom=prenom;
}

void client::setTotal_reservation(int total_reservation)
{
client::total_reservation=total_reservation;
}

int client::getID()
{
return client::id;
}

string client::getNom()
{
return client::nom;
}

string client::getPrenom()
{
return client::prenom;
}

int client::getTotal_reservation()
{
return client::total_reservation;
}
