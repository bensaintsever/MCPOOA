//
//  Date.hpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 19/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
class Date{
private:
    int jour;
    int mois;
    int an;
public:
    Date(int=0,int=0,int=0);
    Date(const Date&);
    void afficher();
    bool egals(Date);
};

#endif /* Date_hpp */
