#include "Cbancaire.h"

CBancaire::CBancaire(){
this->Solde = 0.00;
this->NumCompte = 0;
}

CBancaire::~CBancaire(){}

CBancaire::CBancaire(float Solde , int NumCompte)
{
this->Solde = Solde;
this->NumCompte = NumCompte;
cout <<"Votre compte a été créé"<<endl;
}

float CBancaire::setSolde(float Solde){
    this->Solde = Solde;
    return Solde;
}
void CBancaire::getSolde()const{
    cout << "Votre solde actuellement:  " << this->Solde <<endl;
}

int CBancaire::setNumCompte(int NumCompte){
    this->NumCompte = NumCompte;
    return NumCompte;
}
void CBancaire::getNumCompte()const{
    cout << "Votre numéro de compte :  " << this->NumCompte <<endl;
}

void CBancaire::Crediter(){

}

void CBancaire::CrediterAutre(){

}

void CBancaire::Debiter(){    

}

void CBancaire::Consulter(){

}

void CBancaire::Virement(){

}

void CBancaire::Chequier(){

}

void CBancaire::InformationCompte(){
    this->getSolde();
    this->getNumCompte();
}
