#include "application.h"

void Application::ajoutMatiere()
{
	string libEntree;
	int numEntree;
	cout<<"   +-------------------+"<<endl;
	cout<<"   | Nouvelle Matiere  |"<<endl;
	cout<<"   +-------------------+"<<endl;
	cout<<"Entrez le libelle de la matiere : "<<endl;
	getline(cin,libEntree);
	cout<<"Entrez le numero de la matiere : "<<endl;
	cin>>numEntree;cin.ignore(1);
	tabMatiere.push_back(Matiere(numEntree,libEntree));

}

void Application::ajoutSection()
{
	string libEntree;
	int numEntree;
	cout<<"   +--------------------+"<<endl;
	cout<<"   |  Nouvelle section  |"<<endl;
	cout<<"   +--------------------+"<<endl;
	cout<<"Entrez le libelle de la section : "<<endl;
	getline(cin,libEntree);
	cout<<"Entrez le numero de la section : "<<endl;
	cin>>numEntree;cin.ignore(1);
	tabSection.push_back(Section(numEntree,libEntree));
}

void Application::afficheMatiere()
{
	for(int noCase=0 ; noCase<tabMatiere.size() ; noCase++)
	{
		tabMatiere[noCase].infoMatiere();//STP
	} //completer si il n'y a pas de matiere
}

void Application::afficheSection()
{	
	for(int noCase=0 ; noCase<tabSection.size() ; noCase++)
	{
		tabSection[noCase].infoSection();//STP
	}	// completer si il n'y a pas de section
}

int Application::getIndiceMatiere(int numeroDeLaMatiere)
{
	int indiceMatiere;
    int compteur=0;
    while(!(compteur==tabMatiere.size() || tabMatiere[compteur].compareNumMatiere(numeroDeLaMatiere)==1))
	{
		compteur++;
	}
  	
	if(compteur==tabMatiere.size())
	{
		cout<<"Etudiant non trouvé"<<endl;
		return -1;
	}
	else
	{
		return compteur;
	}
}

int Application::getSectionIndice(int numeroDeSection)
{
	int indiceSection;
    int compteur=0;
    while(!(compteur==tabSection.size() || tabSection[compteur].comparerNumSection(numeroDeSection)==1))
	{
		compteur++;
	}
  	
	if(compteur==tabSection.size())
	{
		cout<<"Section non trouvé"<<endl;
		return -1;
	}
	else
	{
		return compteur;
	}	
}

void Application::gererSection()
{
	int numSection;
	cout<<"Entrer le numero de la section a gerer"<<endl;
	cin>>numSection;
	if(getSectionIndice(numSection)!=-1)
	{
	tabSection[getSectionIndice(numSection)].runSection();
	}
}

void Application::afficheMenu()
{
	cout<<"          +-----------------------------------------------+"<<endl;
	cout<<"          |                     MENU                      |"<<endl;
	cout<<"          +-----------------------------------------------+"<<endl;
	cout<<"          |     Entrez 1 pour ajouter une section         |"<<endl;
	cout<<"          |     Entrez 2 pour supprimer une section       |"<<endl;
	cout<<"          |     Entrez 3 pour afficher toutes les sections|"<<endl;
	cout<<"          |     -------4----------------------------      |"<<endl;
	cout<<"          |     Entrez 5 pour ajouter une matiere         |"<<endl;
	cout<<"          |     Entrez 6 pour supprimer une matiere       |"<<endl;
	cout<<"          |     Entrez 7 pour afficher les matieres       |"<<endl;
	cout<<"          |     Entrez 8 pour gerer une section           |"<<endl;
	cout<<"          |     Entrez 9 pour quitter                     |"<<endl;
	cout<<"          +-----------------------------------------------+"<<endl;
}

int Application::choisirOption()
{
	int actionChoisie;
	cout<<"Entrer : ";
	cin>>actionChoisie;cin.ignore(1);
	cout<<"-----------------------------------------------------------------------"<<endl;
	return actionChoisie;
}

void Application::executerAction(int actionChoisie)
{
	switch(actionChoisie)
	{
			case 1:
				ajoutSection();
					break;
			case 2:
				cout<<"suppression"<<endl;
					break;
			case 3:
				afficheSection();
					break;
			case 5:
				ajoutMatiere();
					break;
			case 6:
				cout<<"suppression"<<endl;
					break;
			case 7:
				afficheMatiere();
					break;
			case 8:
				gererSection();
					break;
			case 9:
				cout<<"Au revoir"<<endl;
					break;
			default:
					break;
	}
}


void Application::run()
{
	int quitter=0;
	do
	{
			afficheMenu();
			executerAction(choisirOption());
	}
	while(!(quitter!=9)); // la boucle s'interromp au premiere essaie...
}
