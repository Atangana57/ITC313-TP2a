#ifndef RESERVATION_H
#define RESERVATION_H
#include "date.h"


class reservation
{
    public:
        reservation();
        reservation(int id,int idChambre,int idClient,int idHotel,double montant,date debut,date fin);
        virtual ~reservation();

        int getId();
        int getIdChambre();
        int getIdClient();
        int getIdHotel();
        double getMontant();
        date getDebut();
        date getFin();

        void setId(int id);
        void setIdChambre(int idChambre);
        void setIdClient(int idClient);
        void setIdHotel(int idHotel);
        void setMontant(double montant);
        void setDebut(date debut);
        void setFin(date fin);



    protected:

    private:
    int id;
    int idChambre;
    int idClient;
    int idHotel;
    double montant;
    date debut;
    date fin;

};

#endif // RESERVATION_H
