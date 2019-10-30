#include <iostream>
#include <vector>
using namespace std;

class Etudiant{
	private:

	//propriétés
	string nomEtudiant;
	string prenomEtudiant;
	int numeroEtudiant;
	vector<float> tabNotesEtudiant;

	public:

	//methodes
	Etudiant(string e_nomEtudiant, string e_prenomEtudiant, int e_numeroEtudiant);
	void creerEtudiant();//F S'en servir dans section dans la procedure ajoutEtudiant
	void ajoutNoteEtudiant(float noteEtudiant);//F ajout dans tableau de note	
	float moyenneEtudiant();//F
	void infoEtudiant();//F

	int comparerNumEtudiant(int numEntree);
};
