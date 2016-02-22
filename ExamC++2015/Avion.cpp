//
//  Avion.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 21/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include "Avion.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include "Passager.hpp"
#include "PassagerFirstClass.hpp"
using namespace std;

Avion::Avion(int tailleTableau){
    this->nbPassagerMax = tailleTableau;
    this->nbPassagerCourant = 0;
    // ID ?
    this->passager = vector<Passager*>(0);
}

Avion::~Avion(void){

}
Avion::Avion(const Avion& a){
    this->id = a.id;
    this->nbPassagerCourant = a.nbPassagerCourant;
    this->nbPassagerMax = a.nbPassagerMax;
    this->passager = a.passager; //Surcharge operateur vector utilisable
}
void Avion::operator=(const Avion& a){
    this->id = a.id;
    this->nbPassagerCourant = a.nbPassagerCourant;
    this->nbPassagerMax = a.nbPassagerMax;
    this->passager = a.passager; //Surcharge operateur vector utilisable
}

void Avion::enregistrementPassager(Passager& p){
    if(this->nbPassagerCourant < this->nbPassagerMax){
        this->passager.push_back(&p);
        //this->passager.push_back(p);
        this->nbPassagerCourant++;
    }
    else
        cout<<"Plus de place disponnible à bord de ce vol"<<endl;
}
bool Avion::operator&&(const Avion& a){
    if(this->nbPassagerCourant != a.nbPassagerCourant)
        return false;
    int indice = 0;
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
            if(!((*it) == (a.passager[indice])))
                return false;
        indice++;
    }
    
    return true;
}

/* PROBLEME */
Avion Avion::operator-(const Avion& a){
    Avion a2(this->nbPassagerCourant + a.nbPassagerCourant);
    int indice = 0;
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
        
            if(!((*it) == a.passager[indice])){
                //problème
                //Passager p2();
                //p2= (*it);
                //a2.enregistrementPassager(p2);
            }
        
        indice++;
                
    }
    return a2;
}

bool Avion::operator/(const Passager& p){
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
        if(*it == &p)
            return true;
    }
    return false;
}

int Avion::getTotalPrixBillet(void){
    int somme = 0;
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
        somme += (*it)->getCout();
    }
    return somme;
}

int Avion::getNbBilletPremiere(void){
    int somme = 0;
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
         if (typeid(PassagerFirstClass) == (*it)->getType())
             somme++;
    }
    return somme;
}

void Avion::afficherPassager(void){
    for(vector<Passager*>::iterator it = this->passager.begin() ; it != this->passager.end(); ++it){
        (*it)->afficher();
    }
}

