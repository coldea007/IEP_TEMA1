#include "Produse.h"


class Client {
public:
	Client(float pret);
	Client();
	Client& operator =(const Client& rhs);
	Client(const Client &ob);
	~Client();
private:
	float pret;
	Produse *p;
};

