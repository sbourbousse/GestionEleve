#include <iostream>
using namespace std;

class Matiere
{
	private:

	//propriétés
	string libelleMatiere;
	int numeroMatiere;

	public:

	//methodes
	Matiere(int m_numeroMatiere, string m_libelleMatiere);
	void creerMatiere();//F S'en servir dans Application dans la procedure ajoutMatiere
	void infoMatiere();//F

	int compareNumMatiere(int numEntree);

	
};

