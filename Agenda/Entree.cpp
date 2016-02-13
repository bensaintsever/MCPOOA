
#include "Entree.h"
#include <iostream>


Entree::Entree(void)
{
	this->sNom = "";
	this->sNum = "";
}

Entree::Entree(string nom, string num)
{
	this->sNom = nom;
	this->sNum = num;
}
Entree::~Entree(void)
{
}

void Entree::afficherEntree(void){
	cout<<"Nom :"<<sNom<<"\n Numero :"<<sNum<<endl;
}

void Entree::editerNom_Num(string nom, string num){
	sNom = nom;
	sNum = num;
}

string Entree::getNom(void){
	return this->sNom;
}
string Entree::getNum(void){
	return this->sNum;
}