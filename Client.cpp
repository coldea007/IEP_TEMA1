
#include <iostream>
#include <cmath>
#include "client.h"


using namespace std;

Client::Client(float p)
	:p(new Produse(p)),
	pret(p)
{}
Client::Client(const Client &obj)
{
	pret = obj.pret;
}
Client::~Client() {
}

Client& Client::operator=(const Client& rhs) {
	this->pret = rhs.pret;
	Produse* dOrig = p;
	p = new Produse(*rhs.p);
	delete dOrig;

	return *this;
}

