#include <iostream>
using namespace std;
#include "clienb.h"
#include "Cbancaire.h"


int main() {
    
    cout << "***** Bonjour bienvenue dans notre banque ***** " <<endl;
    CBancaire cb1(2750 , 104789456);
    cb1.InformationCompte();
           
	
    client c1 (1904 , "Ken", "Kitano" , 603483733);
    c1.InformationClient();
    
    
    return 0 ;
}