#pragma once
class MonteCharge
{
private : 
	int etage; // represente le numero des etages ou ce trouve 
	// le monte charge 
	int nbEtagesMax; // nombre maximal d'�tages existants

public :
	MonteCharge(); // constructeur 
	~MonteCharge(); // destructeur 
	MonteCharge(int nbEtages);//constructeur
	void initialise_toi(int etageX);//permet d�initialiser l��tage initial du monte charge
	void affiche_toi();//permet d�afficher le num�ro de l��tage o� se trouve le monte-charge
	void monte(); //monte d�un �tage
	void monte(int etageM); //monte d�un certain nombre d��tage (s)
	void descend(); //descend d�un �tage
	void descend(int etageD); //descend d�un certain nombre d��tage(s)

};


