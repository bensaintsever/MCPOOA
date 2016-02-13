#include "Agenda.h"
#include "Tableau.h"
#include <iostream>
using namespace std;

Agenda::Agenda(void)
{
    this->tab = new Tableau;
}


Agenda::~Agenda(void)
{
    this->tab->~Tableau();
}


Agenda::Agenda(const Agenda& agenda){
    
    this->tab = new Tableau(*agenda.tab);
}

void Agenda::concat(Agenda a){
    this->tab->concatTableau(*a.tab);
}
void Agenda::addToAgenda(string nom ,string num){
    this->tab->addEntree(nom,num);
}
void Agenda::deleteToAgenda(string nom ,string num){
    this->tab->deleteEntree(nom,num);
}
void Agenda::afficherAgenda(){
    cout<<"Contenu de l'agenda :\n"<<endl;
    this->tab->afficherTableau();
}