#pragma once
#include <string>
#include "Tableau.h"
class Agenda
{
private:
	Tableau* tab;
public:
	Agenda(void);
	Agenda(const Agenda&);
	void concat(Agenda src);
	void addToAgenda(string nom ,string num);
	void deleteToAgenda(string nom ,string num);
	void afficherAgenda();
	~Agenda(void);
};

