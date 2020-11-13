#ifndef CBANCAIRE_H
#define CBANCAIRE_H
#include <iostream>
using namespace std;


class CBancaire

{
public: //Partie publique

CBancaire();
            ~CBancaire();
            CBancaire(float Solde , int NumCompte);

            float setSolde(float Solde);
            void getSolde()const;
                 
            int setNumCompte(int NumCompte);
            void getNumCompte()const;


            void Crediter();                //Crediter le compte, en déposant une somme.
            void CrediterAutre();           //Crediter le compte, prenant une somme d’un autre compte (créditant le compte et débitant le compte passé en paramètres). 
            void Debiter();                 //De Debiter le compte, en retirant une somme. 
            void Consulter();               //De Consulter un RIB.
            void Virement();                //De faire des virements.
            void Chequier();                //De Commander un chéquier.
            void InformationCompte();             //Affficher les informations du compte.
            

             private:
            float Solde;
            int NumCompte; //modif
             
};
#endif