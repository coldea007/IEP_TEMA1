#include <iostream>
#include "Magazin.h"
#include "Produse.h"	

using namespace std;


int main() {

	Produse p1('Apa', 2, 3.5), p2('Oua', 5, 2.5);
	Produse p3 = p1;
	p2 = p1;
	cout << "p2: " << p2.getName() << p2.getCantitate() << p2.getPret() << endl; 
	cout << p1.discount() << endl << p2.discount();

	Magazin m1(p1, p2);
	cout << "Pretul total este:" << m1.pretTotal();
	Produse p4('Suc', 1, 6.5);
	p1 = p2 = p3;
	p1 += p2;
	return 0;
}	
