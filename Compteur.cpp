// Compteur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Compteur.h"
#include "MonteCharge.h"
using namespace std; 

int main()
{
    Compteur compteur1;
    compteur1.clic(); // incrémente la valeur 
    compteur1.afficheValeur(); // affiche la valeur 
    compteur1.raz(); // renitialise la valeur 
    compteur1.clic(); // incrémente la valeur 
    compteur1.clic();
    compteur1.afficheValeur(); // affiche la valeur 

    Compteur compteur2; // crée un compteur  appeller compteur 2
    compteur2.clicsMultiples(compteur1.getValeur() + 5); //  la valeur du compteur 1 par 5 
    cout << "Valeur du compteur 2 : " << compteur2.getValeur() << endl; // affiche la valeur du compteur 2


    // Partie monte charge : 

    MonteCharge x, y;

    x.initialise_toi(5);
    y.initialise_toi(0);

    x.affiche_toi(); y.affiche_toi();

    x.monte(); x.affiche_toi();
    x.monte(5); x.affiche_toi();
    x.descend(); x.affiche_toi();
    y.monte(12); y.affiche_toi();
    y.descend(); y.affiche_toi();
    y.descend(); y.affiche_toi();
    y.monte(5); y.affiche_toi();
    y.descend(); y.affiche_toi();


}

Compteur::Compteur()
{
	val = 0;
}

void Compteur::clic()
{
	val++; 
}

void Compteur::raz()
{
	val = 0; 
}

void Compteur::afficheValeur()
{
    cout << "La valeur du compteur est : " << val << endl;


}
void Compteur::clicsMultiples(int n) {
    val += n;
}

int Compteur::getValeur() {
    return val;
}
