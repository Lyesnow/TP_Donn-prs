#include "exo3.h"

employe::employe(){
    this-> Nom="Lyeee";
    this->Prenom = "Claire";
    this->Date = 2000;


}
employe::~employe(){}

employe::employe(string Nom, string Prenom,   int Date)
{
    
    this->Nom =Nom;
    this->Prenom =Prenom;
    this->Date =Date;
}

string employe::getNom()
{
    return this->Nom;
}
string employe::setNom(string name)
{
  name= this->Nom;
}
string employe::getPrenom()
{
    return this->Prenom;
}
string employe::setPrenom(string pre)
{
    pre= this->Prenom;
}


int employe::getDate()
{
    return this->Date;
}
int employe::setDate(int ident)
{
    ident= this->Date;
}


int employe::salaire()
        {
            int a,b;
            cout <<  "Salaire horaire (en euros)? " << endl;
            cin >>a;
            cout << "Nombre d’heures (du mois)?" << endl;
            cin >>b;
            int c ;
            c= a*b;
            cout << "votre salaire est de:"<< c << endl;
            
        }

void  employe::afficher()
            {
                cout << "Nom " << this ->getNom()<< endl;
                cout << "Prénom: "<< this ->getPrenom() << endl;
                cout << "Date :" << this ->getDate()<<  endl;
            }      