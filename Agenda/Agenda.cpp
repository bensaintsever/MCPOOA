#include "Agenda.h"
#include "Tableau.h"

Agenda::Agenda(void)
{
    Tableau t(*this->tab);
	
}


Agenda::~Agenda(void)
{
    this->tab->~Tableau();
}


Agenda::Agenda(const Agenda& agenda){
  /*  //tab.Tableau(agenda.tab);
    this->tab.Tableau(*agenda.tab);
    //this->tab(agenda.tab);
	
	this->tailleMax = t.tailleMax;
	this->tab = vector<Entree>(tailleMax);
	//this->tab = new Entree[tailleMax];
	for(int i=0; i<t.nbElem;++i){
		this->tab[i] = t.tab[i];
	}
	*/
}
/*
Agenda Agenda::concat(Agenda a){
	int s = this->tab->getNbElement() + a.tab->getNbElement();
	Tableau* temp = new Tableau(s);
    temp->setNbElement(s);

	for (int i = 0; i<s; ++i)
		i < this->tab->nbEntree ? 
		temp->listeEntree[i] = this->tab->listeEntree[i]
	  : temp->listeEntree[i] = a.tab->listeEntree[i-this->tab->nbEntree];

	return new Agenda(temp);
}*/
void Agenda::addToAgenda(string nom ,string num){
}
void Agenda::deleteToAgenda(string nom ,string num){
}
void Agenda::afficherAgenda(){
}