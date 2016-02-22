//
//  Ville.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 21/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include "Ville.hpp"
#include <string>
#include <iostream>
using namespace std;

Ville::Ville(string nom ,CoordonneesGPS coord){
    this->nom = nom;
    this->coord = coord;
}

void Ville::afficher(){
    cout<<"Ville : "<<this->nom<<endl;
    this->coord.afficher();
}