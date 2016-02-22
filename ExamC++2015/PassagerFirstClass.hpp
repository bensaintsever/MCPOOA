//
//  PassagerFirstClass.hpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 20/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#ifndef PassagerFirstClass_hpp
#define PassagerFirstClass_hpp

#include <stdio.h>
#include "Passager.hpp"

class PassagerFirstClass : public Passager{
private:
    int nbPrestations;
    int coutPrestation = 50;
    
public:
    ~PassagerFirstClass();
    PassagerFirstClass(string nom, Date date, int poids, int nbPrestations);
    PassagerFirstClass();
    void afficher(void);
    virtual const type_info& getType(void);
    
    
};
#endif /* PassagerFirstClass_hpp */
