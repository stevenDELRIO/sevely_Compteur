#pragma once
class MonteCharge
{
private : 
	int etage; // represente le numero des etages ou ce trouve 
	// le monte charge 
	int nbEtagesMax; // nombre maximal d'étages existants

public :
	MonteCharge(); // constructeur 
	~MonteCharge(); // destructeur 
	MonteCharge(int nbEtages);//constructeur
	void initialise_toi(int etageX);//permet d’initialiser l’étage initial du monte charge
	void affiche_toi();//permet d’afficher le numéro de l’étage où se trouve le monte-charge
	void monte(); //monte d’un étage
	void monte(int etageM); //monte d’un certain nombre d’étage (s)
	void descend(); //descend d’un étage
	void descend(int etageD); //descend d’un certain nombre d’étage(s)

};


