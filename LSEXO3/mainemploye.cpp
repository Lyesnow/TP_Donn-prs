#include <iostream>  
#include "exo3.h"

int main(){

    employe em("Kitano", "lyes",2007);
    cout << " voici les informations de l'employe" <<endl;
    em.afficher();
    em.salaire();
}
