//
//  PassagerFirstClass.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 20/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include "PassagerFirstClass.hpp"
#include "Passager.hpp"
#include <string>
#include <iostream>
using namespace std;

PassagerFirstClass::PassagerFirstClass(string nom, Date date, int poids, int nbPrestations) : Passager(nom,date,poids){
    this->nbPrestations = nbPrestations;
    setCout(getCout()+(nbPrestations*coutPrestation));
}

PassagerFirstClass::~PassagerFirstClass(){}

void PassagerFirstClass::afficher(void){
    Passager::afficher();
    cout<<"Nombre de prestations : "<<this->nbPrestations<<"\nCoût supplémentaire engendré : "<<this->coutPrestation*this->nbPrestations<<endl;
}
const type_info& PassagerFirstClass::getType(void){
    return typeid(PassagerFirstClass);
}