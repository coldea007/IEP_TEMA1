#pragma once


using namespace std;

class Produse {
public:
	Produse(char name, int cantitate, float pret);
	Produse(const Produse &ob);
	Produse &operator = (const Produse &ob);
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