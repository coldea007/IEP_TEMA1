#include <iostream>
#include "Magazin.h";

using namespace std;


Magazin::Magazin(Produse pr1, Produse pr2)
	:p1(pr1),
	p2(pr2)
{}

Magazin::~Magazin() {
	cout << "Magazin distrus" << endl;
}

/* 
Magazin::Magazin(const Magazin &obj) {

	p1 = obj.p1;
	p2 = obj.p2;

	cout << "Magazin Copy-constructor is called here" << endl;
}

Magazin & Magazin::operator = (const Magazin &obj) {
	
	p1 = obj.p1;
	p2 = obj.p2;

	cout << "Magazin Assigment operator is called here" << endl;
}


*/

float Magazin::pretTotal() {

	return (p1.getProdusInstance().getPret() + p2.getProdusInstance().getPret());
}