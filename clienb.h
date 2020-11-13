#ifndef CLIENB_H
#define CLIENB_H
#include <iostream>  



using namespace std;

class client { // Création de l'objet

    private:
            int CIN;            //Le numéro de CIN (carte d'identité nationale ), 
            string Nom;         //Nom du client
            string Prenom;      //Prénom du client
            int Tel;            //Numéro de Téléphone

    public:
            client();
            ~client();
            client(int CIN , string Nom , string Prenom , int Tel);
           
            int setCIN(int CIN);
            void getCIN()const;
            
            string setNom(string nom);
            void getNom()const;

            string setPrenom(string Prenom);
            void getPrenom()const;

            int setTel(int Tel);
            void getTel()const;

            void InformationClient();
         
};
#endif