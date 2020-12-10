#include "Produse.h"
#include <iostream>
#include <cmath>

using namespace std;

Produse::Produse(char N, int  C, float  P)
	:name(N),
	cantitate(C),
	pret(P)
{}
Produse::Produse( float  P)

	:pret(P)
{}

Produse::~Produse() {}

Produse::Produse(const Produse &obj) {
	Client(obj);
	name = obj.name;
	cantitate = obj.cantitate;
	pret = obj.pret;
}

Produse &Produse::operator=(const Produse &ob)
{
	Client::operator=(ob);
	name = ob.name;
	cantitate = ob.cantitate;
	pret = ob.pret;
	cout << "Assignment operator called " << endl;
	return *this;
}
Produse& Produse:: operator+=(const Produse& ob2)
{
	this->pret = this->pret + ob2.pret;
	return *this;
}
Produse &Produse::getProdusInstance() {
	static Produse p(this->getName(), this->getPret(), this->getCantitate());
	return p;

}

float Produse::discount()
{
	return (pret - 0.2*pret);
}

int Produse::getCantitate()
{
	return cantitate;
}

char Produse::getName()
{
	return name;
}

float Produse::getPret()
{
	return pret;
}
