//
//  Date.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 19/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include "Date.hpp"
#include <iostream>
using namespace std;


Date::Date(int jour,int mois, int annee){
    this->jour = jour;
    this->mois = mois;
    this->an = annee;
}

Date::Date(const Date& d){
    this->jour = d.jour;
    this->mois = d.mois;
    this->an = d.an;
}
void Date::afficher(){
    printf("%d/%d/%d\n",this->jour,this->mois,this->an);
    //cout<<this->jour + "/" + this->mois + "/" + this->an<<endl;
}

bool Date::egals(Date d){
    return (this->jour == d.jour) && (this->mois == d.mois) && (d.an == this->an);
}