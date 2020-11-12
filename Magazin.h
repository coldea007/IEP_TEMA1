#include "Produse.h"

class Uncopyable {
protected:
	Uncopyable() {}
	~Uncopyable() {}
private:
	Uncopyable(const Uncopyable&);
	Uncopyable& operator=(const Uncopyable&);
};

class Magazin:private Uncopyable {
public:
	Magazin(Produse pr1, Produse pr2);
	~Magazin();
	float pretTotal();
	Produse p1, p2;

};