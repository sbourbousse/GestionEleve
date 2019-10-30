#include "application.h"

int main()
{
	Application app;
	int quitter=0;
	
	do
	{
		app.run();
	}
	while(!(quitter==9));
}
