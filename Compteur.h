#ifndef COMPTEUR_H
#define COMPTEUR_H

class Compteur {
private:
    int val;

public:
    Compteur(); // constructeur 
    void clic();
    void raz(); // renitialise la valeur 
    void afficheValeur(); // affiche la valeur 
    void clicsMultiples(int n); // multiplie la valeur la n 
    int getValeur(); 
   

   
};

#endif
