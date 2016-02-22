//
//  Ville.hpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 21/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#ifndef Ville_hpp
#define Ville_hpp

#include <stdio.h>
#include <string>
#include "CoordonneesGPS.hpp"
using namespace std;

class Ville{
    string nom;
    CoordonneesGPS coord;
public:
    Ville();
    Ville(string,CoordonneesGPS);
    void afficher();
};

#endif /* Ville_hpp */
