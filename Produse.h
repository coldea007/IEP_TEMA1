#pragma once
#include "Client.h"

using namespace std;

class Produse : public Client {
public:
	Produse(char name, int cantitate, float pret);
	Produse(float pret);
	
	Produse(const Produse &ob);
	Produse &operator = (const Produse &ob);
	Produse &operator+=(const Produse& ob2);
	~Produse();
	Produse &getProdusInstance();
	char getName();
	int getCantitate();
	float getPret();
	float discount();
private:
	char name;
	int cantitate;
	int pret;
};
