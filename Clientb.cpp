#include "clienb.h"

client::client(){
this->CIN = 0;
this->Nom = "NULL";
this->Prenom = "NULL";
this->Tel = 0;
}

client::~client(){}

client::client(int CIN =0 , string Nom ="NULL" , string Prenom ="NULL" , int Tel =0)

{
this->CIN = CIN;
this->Nom = Nom;
this->Prenom = Prenom;
this->Tel = Tel;
}

int client::setCIN(int CIN){
    this->CIN = CIN;
    return CIN;
}
void client::getCIN()const{
    cout << "Votre numéro de CIN est : " << this->CIN <<endl;
}

string client::setNom(string Nom){
    this->Nom = Nom;
    return Nom;
}
void client::getNom()const{
    cout << "Votre nom :  " << this->Nom <<endl;
}

string client::setPrenom(string Prenom){
    this->Prenom = Prenom;
    return Prenom;
}
void client::getPrenom()const{
    cout << "Votre prénom : " << this->Prenom <<endl;
}

int client::setTel(int Tel){
    this->Tel = Tel;
    return Tel;
}
void client::getTel()const{
    cout << "Votre numéro de téléphone : " << this->Tel <<endl;
}

void client::InformationClient(){
    this->getCIN();
    this->getNom();
    this->getPrenom();
    this->getTel();
}
