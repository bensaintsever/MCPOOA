//
//  main.cpp
//  Agenda
//
//  Created by Benjamin Saint-Sever on 12/02/2016.
//  Copyright © 2016 Benjamin Saint-Sever. All rights reserved.
//

#include <iostream>
#include "Entree.h"
#include "Tableau.h"
#include "Agenda.h"
using namespace std;

int main(int argc, const char * argv[]) {
    /*Entree e;
    e.editerNom_Num("ben","0611111110");
    e.afficherEntree();
    
    Tableau t(10);
    t.addEntree("Benji", "0615151515");
    t.addEntree("alex", "0615161616");
    t.afficherTableau();
    t.deleteEntree("alex");
    t.afficherTableau();
    
    cout<< "\nTaille du tableau : " <<t.getSize() << "\nNombre d'elements : " <<t.getNbElement() <<endl;*/
    Agenda a;
    a.addToAgenda("Benjamin","0677693401");
    a.addToAgenda("Alex","bidon");
    a.addToAgenda("Thomas","bidon2");
    cout<<"Affiche numéro 1 :\n"<<endl;
    a.afficherAgenda();
    
    
    //a.deleteToAgenda("Benjamin","0677693401");
    
    Agenda b;
    b.addToAgenda("Christine","06778888");
    b.addToAgenda("Alexandra","bidon3");
    b.addToAgenda("Thomadias","bidon4");
    cout<<"Affiche numéro 2 :\n"<<endl;
    b.afficherAgenda();
    
    
    a.concat(b);
    cout<<"Affiche numéro 3 :\n"<<endl;
    a.afficherAgenda();
                  
    
    
    
    return 0;
}
