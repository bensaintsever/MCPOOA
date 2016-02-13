#pragma once
#include <vector>
#include "Entree.h"
class Tableau
{
	private:
		int tailleMax;
		int nbElem;
		vector<Entree> tab;
		
	public:
	
		Tableau(void);
		Tableau(int);
		Tableau(const Tableau&);
		~Tableau(void);

		void afficherTableau(void);
		int getNbElement(void);
        void setNbElement(int);
		int getSize(void);
		void addEntree(string nom, string num);
		void deleteEntree(string nom, string num);
		void deleteEntree(string nom);
};

