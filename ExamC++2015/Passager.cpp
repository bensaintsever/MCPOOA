//
//  Passager.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 19/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include "Passager.hpp"
#include <string>
#include <iostream>
using namespace std;

Passager::Passager(void){
    
}
Passager::Passager(string nom, Date date, int poids){
    this->nom = nom;
    this->date_naissance = Date(date);
    if (poids > 23)
        this->_cout = 100 + (poids-23)*15;
    else
        this->_cout = 100;
    this->poids = poids;
    
}

Passager::Passager(const Passager& p){
    this->nom = p.nom;
    this->poids = p.poids;
    this->date_naissance = Date(p.date_naissance);
    this->_cout = p._cout;
}

void Passager::afficher(){
    cout<<"Nom : "<<this->nom<<"\nDate de naissance : "<<endl;
    this->date_naissance.afficher();
    cout<<"Poids : "<<this->poids<<"\nCout du billet : "<<this->_cout<<endl;
}

int Passager::getCout(){
    return this->_cout;
}
void Passager::setCout(int _cout){
    this->_cout = _cout;
}
bool Passager::operator==(const Passager& p){
    return (this->date_naissance.egals(p.date_naissance) && (this->nom == p.nom));
}

bool Passager::operator==(const Date& d){
    return this->date_naissance.egals(d);
}

const type_info& Passager::getType(void){
    return typeid(Passager);
}