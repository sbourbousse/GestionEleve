#include "section.h"

Section::Section(int s_numSection, string s_libelleSection)
{
	numSection = s_numSection;
	libelleSection = s_libelleSection;
}

void Section::infoSection()
{
	cout<<endl;
	cout<<"         INFORMATION DE LA SECTION "<<numSection<<endl;
	cout<<"         libelle de la section : "<<libelleSection<<endl;
	cout<<"         numero de la section : "<<numSection<<endl;
	cout<<"         nombre d'etudiant de la section : "<<tabEtudiantSection.size()<<endl;
	cout<<endl<<endl;
	//Prochainement integrer moyenen general de la section
}

void Section::afficheEtudiant()
{
	for(int noCase=0 ; noCase<tabEtudiantSection.size() ; noCase++)
	{
		tabEtudiantSection[noCase].infoEtudiant();//STP
	}
}


void Section::ajoutEtudiant()
{
	string nomEntree;
	string prenomEntree;
	int numEntree;
	cout<<"   +-----------------+"<<endl;
	cout<<"   | Nouvel etudiant |"<<endl;
	cout<<"   +-----------------+"<<endl;
	cout<<"Quel est le nom de l'étudiant ?"<<endl;
	getline(cin,nomEntree);
	cout<<"Quel est le prénom de l'étudiant ?"<<endl;
	getline(cin,prenomEntree);
	cout<<"Quel est le numéro de l'étudiant ?"<<endl;
	cin>>numEntree; cin.ignore(1);
	tabEtudiantSection.push_back(Etudiant(nomEntree,prenomEntree,numEntree));
}

/*void Section::ajoutMatiereASection()
{
	int numeroMatiereEntree;
	cout<<"Entrez le numero de la matiere à ajouter à la section : "<<endl;
	cin>>numeroMatiereEntree;cin.ignore(1);
	tabMatiereSection[nbMatiereSection]=tabMatiere[getIndiceMatiere(numeroMatiereEntree)]	
}*/

void Section::ajoutNoteSection()
{
	int numeroEtudiant;
	float noteEtudiant;
	cout<<"Entrez le numero de l'etudiant auquel vous souhaitez ajouter la note"<<endl;
	cin>>numeroEtudiant;cin.ignore(1);
	cout<<"Entrez la note de cet etudiant"<<endl;
	cin>>noteEtudiant;cin.ignore(1);
	tabEtudiantSection[getEtudiantIndice(numeroEtudiant)].ajoutNoteEtudiant(noteEtudiant);
}



int Section::getEtudiantIndice(int numeroDeLEtudiant)
{
	int indiceEtudiant;
    int compteur=0;
    while(!(compteur==tabEtudiantSection.size() || tabEtudiantSection[compteur].comparerNumEtudiant(numeroDeLEtudiant)==1))
	{
		compteur++;
	}
  	
	if(compteur==tabEtudiantSection.size())
	{
		cout<<"Etudiant non trouvé"<<endl;
		return -1;
	}
	else
	{
		return compteur;
	}
}

void Section::afficheMenuSection()
{

	cout<<"          +-----------------------------------------------+"<<endl;
	cout<<"                         MENU section "<<libelleSection<<endl;
	cout<<"          +-----------------------------------------------+"<<endl;
	cout<<"          |     Entrez 1 pour ajouter un etudiant         |"<<endl;
	cout<<"          |     Entrez 2 pour supprimer un etudiant       |"<<endl;
	cout<<"          |     Entrez 3 pour ajouter une note            |"<<endl;
	cout<<"          |     Entrez 4 pour afficher tout les etudiants |"<<endl;
	cout<<"          |     Entrez 9 pour revenir en arriere          |"<<endl;
	cout<<"          +-----------------------------------------------+"<<endl;	
}


int Section::choisirOptionSection()
{
	int actionChoisie;
	cout<<"Entrer : ";
	cin>>actionChoisie;cin.ignore(1);
	cout<<"-----------------------------------------------------------------------"<<endl;
	return actionChoisie;
}

void Section::executerActionSection(int actionChoisie)
{
	switch(actionChoisie)
	{
			case 1:
				ajoutEtudiant();
					break;
			case 2:
				cout<<"suppression"<<endl;
					break;
			case 3:
				ajoutNoteSection();
					break;
			case 4:
				afficheEtudiant();
					break;
			case 9:
				cout<<"Au revoir"<<endl;
					break;
			default:
					break;
	}
}


void Section::runSection()
{
	int quitter=0;
	do
	{
			afficheMenuSection();
			executerActionSection(choisirOptionSection());
	}
	while(!(quitter!=9)); // la boucle s'interromp au premiere essaie...
}

int Section::comparerNumSection(int numEntree)
{
	if (numEntree==numSection) return 1;
	else return -1;
}