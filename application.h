#include "section.h"
#include "matiere.h"
using namespace std;

class Application{
	private:
		
	//propriétés
	vector<Matiere> tabMatiere;
	vector<Section> tabSection;
	
	public:

	//methodes
	void ajoutMatiere();//F
	void ajoutSection();//F
	void afficheMatiere();//F
	void afficheSection();//F
	int getIndiceMatiere(int numeroDeLaMatiere);//F
	int getSectionIndice(int numeroDeSection);//F
	void gererSection();//F
	void afficheMenu();//F
	int choisirOption();//F
	void executerAction(int actionChoisie); //F
	void run();//F

	//SUPPRIMER MATIERE
	//SUPPRIMER SECTION
};
