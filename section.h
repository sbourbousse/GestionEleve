#include "etudiant.h"
using namespace std;

class Section{
	private:

	//Propriétés
	string libelleSection;
	int numSection;
	vector<Etudiant> tabEtudiantSection;
	vector<int> tabMatiereSection;

	public:

	//methodes
	Section(int s_numSection, string s_libelleSection);
	void creerSection();//F S'en servir dans Application dans la procedure ajoutSection
	void infoSection();//F
	void afficheEtudiant();//F
	//void ajoutMatiereASection();//F Definir une matiere a la section
	void ajoutEtudiant();//F
	// SUPPRIMER ETUDIANT
	void ajoutNoteSection();//F
	int getEtudiantIndice(int numeroDeLEtudiant);//F
	void afficheMenuSection();
	int choisirOptionSection();
	void executerActionSection(int actionChoisie);
	void runSection();

	int comparerNumSection(int numEntree);
};
