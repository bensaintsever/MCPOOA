//
//  Passager.hpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 19/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#ifndef Passager_hpp
#define Passager_hpp

#include <stdio.h>
#include "Date.hpp"
#include <iostream>
#include <string>
using namespace std;

class Passager{
protected:
    string nom;
    Date date_naissance;
    int _cout;
    int poids;
public:
    Passager();
    Passager(string nom, Date date, int poids);
    Passager(const Passager&);
    void afficher();
    int getCout();
    void setCout(int);
    bool operator==(const Passager&);
    bool operator==(const Date&);
    virtual const type_info& getType(void);
};

#endif /* Passager_hpp */
