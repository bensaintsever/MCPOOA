#pragma once
#include <string>
using namespace std ;
class Entree
{
private:
	string sNom;
	string sNum;
public:
	Entree(void);
	~Entree(void);
	Entree(string,string);
	void afficherEntree(void);
	void editerNom_Num(string nom, string num);
	string getNom(void);
	string getNum(void);
};

