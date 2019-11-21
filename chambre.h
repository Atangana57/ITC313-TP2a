#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <string>
using namespace std;

class chambre
{
    public:
        chambre();
        chambre(int id,string typ,double pri);
        virtual ~chambre();
         int getID();
         string getType();
         double getPrix();

        void setID(int id);
        void setType(string typ);
        void setPrix(double pri);

    protected:

    private:
    int id;
    string type;
    double prix;
};

#endif // CHAMBRE_H
