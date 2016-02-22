//
//  main.cpp
//  ExamC++2015
//
//  Created by Benjamin Saint-Sever on 19/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include <iostream>
#include "Date.hpp"
#include "Passager.hpp"
#include "PassagerFirstClass.hpp"
#include "Avion.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Date d(2,3,2010);
    Passager p("Benji",d,23);
    Passager p2("Vlad",d,25);
    p.afficher();
    p2.afficher();
    if (!(p==p2)) cout<<"pas le meme passager"<<endl;
    if(p == d) cout<<"date de naissance identique"<<endl;
    
    cout<<"-----------------------------------"<<endl;
    cout<<"-- TEST Passager premiere classe --"<<endl;
    cout<<"-----------------------------------"<<endl;
    Date d2(26,9,1991);
    PassagerFirstClass p3("Benjamin",d2,23,3);
    p3.afficher();

    cout<<"-----------------------------------"<<endl;
    cout<<"---------- TEST Avion -------------"<<endl;
    cout<<"-----------------------------------"<<endl;
    Avion a(10);
    a.enregistrementPassager(p);
    a.enregistrementPassager(p2);
    a.enregistrementPassager(p3);
    cout<<"Prix total :"<<a.getTotalPrixBillet()<<"\nNombre de billet premiere classe : "<<a.getNbBilletPremiere()<<endl;
    
    cout<<"---------- TEST operateur d'affectation -------------"<<endl;
    Avion a2 = a;
    a2.afficherPassager();
    cout<<"-----------------------------------"<<endl;
    cout<<"---------- TEST operateur d'intersection -------------"<<endl;
    if (a2&&a) cout<<"Vrai"<<endl;
    cout<<"-----------------------------------"<<endl;
    
    cout<<"---------- TEST operateur moins -------------"<<endl;
    Passager p4("Test",d,23);
    a2.enregistrementPassager(p4);
    Avion a3 = a2-a;
    a3.afficherPassager();
    cout<<"-----------------------------------"<<endl;
    
    return 0;
}
