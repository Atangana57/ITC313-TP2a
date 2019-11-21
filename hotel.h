#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <vector>
#include "chambre.h"


class hotel
{
    public:
        hotel();
        hotel(int id,string nom,string ville,vector<chambre> chambres);
        virtual ~hotel();
        int getID();
        string getNom();
        string getVille();
        vector<chambre> getChambre();

        void setID(int id);
        void setNom(string nom);
        void setVille(string ville);
        void setchambre(vector<chambre> chambres);
        void addChambre(chambre ch);
        void removeChambre(chambre ch);

    protected:

    private:
    int id;
    string nom;
    string ville;
    vector<chambre> chambres;

};

#endif // HOTEL_H
