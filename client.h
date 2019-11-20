#ifndef CLIENT_H
#define CLIENT_H
#include <string>
using namespace std;

class client
{
    public:
        client();
        client(int Id,string nom,string prenom,int total_reservation);
        virtual ~client();

        void setId(int Id);
        void setNom(string nom);
        void setPrenom(string Prenom);
        void setTotal_reservation(int total_reservation);

        int getID();
        string getNom();
        string getPrenom();
        int getTotal_reservation();

    protected:



    private:
    int id;
    string nom;
    string prenom;
    int total_reservation;
};

#endif // CLIENT_H
