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

int main(int argc, const char * argv[]) {
    Entree e;
    e.editerNom_Num("ben","0611111110");
    e.afficherEntree();
    
    Tableau t(10);
    t.addEntree("Benji", "0615151515");
    t.addEntree("alex", "0615161616");
    t.afficherTableau();
    t.deleteEntree("alex");
    t.afficherTableau();
    
    cout<< "\nTaille du tableau : " <<t.getSize() << "\nNombre d'elements : " <<t.getNbElement() <<endl;
    
    return 0;
}
