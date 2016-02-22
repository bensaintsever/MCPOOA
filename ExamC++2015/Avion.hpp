//
//  Avion.hpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 21/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#ifndef Avion_hpp
#define Avion_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "Passager.hpp"

class Avion{
private:
    string id;
    int nbPassagerMax;
    int nbPassagerCourant;
    vector<Passager*> passager;
public:
    Avion(int tailleTab);
    Avion(const Avion&);
    void operator=(const Avion&);
    void enregistrementPassager(Passager&);
    bool operator&&(const Avion&);
    Avion operator-(const Avion&);
    bool operator/(const Passager&);
    int getTotalPrixBillet(void);
    int getNbBilletPremiere(void);
    void afficherPassager(void);
    ~Avion();
};

#endif /* Avion_hpp */
