
#include "Tableau.h"
#include "Entree.h"
#include <iostream>
#include <vector>
using namespace std;

Tableau::Tableau(void)
{
	this->tailleMax = 10;
	this->nbElem = 0;
	this->tab = vector<Entree>(tailleMax);
	//this->tab = new Entree[tailleMax];
}


Tableau::Tableau(int taille)
{
	this->tailleMax = taille;
	this->nbElem = 0;
	this->tab = vector<Entree>(tailleMax);
	//this->tab = new Entree();
	//this->tab = new Entree[tailleMax];
}

Tableau::Tableau(const Tableau& t)
{
	//delete[] this->tab; //Suppressions des elements du tableau
	this->nbElem = t.nbElem;
	this->tailleMax = t.tailleMax;
	this->tab = vector<Entree>(tailleMax);
	//this->tab = new Entree[tailleMax];
	for(int i=0; i<t.nbElem;++i){
		this->tab[i] = t.tab[i];
	}
	
}
Tableau::~Tableau(void)
{
}

void Tableau::afficherTableau(void){
	for(int i = 0; i < nbElem ; ++i){
		cout<<"Element "<<i<<" "<<endl;
		this->tab[i].afficherEntree();
	}
}

int Tableau::getNbElement(void){
	return this->nbElem;
}

void Tableau::setNbElement(int n){
    this->nbElem = n;
}

int Tableau::getSize(void){
	return this->tailleMax;
}
void Tableau::addEntree(string nom, string num){
	//tab.push_back(Entree(nom,num));
	tab[nbElem].editerNom_Num(nom,num);
	nbElem +=1;
}

void Tableau::deleteEntree(string nom, string num){
	
	for(int i = 0; i < this->nbElem; ++i){
		if ((this->tab[i].getNom() == nom)&& (this->tab[i].getNum() == num)){
			tab[i].~Entree();
			tab.erase(tab.begin()+i);
			nbElem--;
		}
	}

}

void Tableau::deleteEntree(string nom){
	
	for(int i = 0; i < this->nbElem; ++i){
		if ((this->tab[i].getNom() == nom)){
			tab[i].~Entree();
			tab.erase(tab.begin()+i);
			nbElem--;
		}
	}

}

