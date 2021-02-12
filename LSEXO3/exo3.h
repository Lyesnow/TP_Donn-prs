#include <iostream>  



using namespace std;

class employe { // Création de l'objet

    private:
            int Date;   
            string Nom;         //Nom du client
            string Prenom;      //Prénom du client
          

    public:
            employe();
            ~employe();
            employe(string Nom , string Prenom ,int Date);
           
            int setDate(int Date);
            int getDate();
            
            string setNom(string Nom);
            string getNom();

            string setPrenom(string Prenom);
            string getPrenom();

            int salaire();
            void afficher();
         
};
