#include "Proxy.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	Subject* sub = new RealSubject();
	Proxy* p = new Proxy(sub);

	p->Request();

	cout << "delete.." <<endl;
	delete p;

	// Proxy * p1 = new Proxy()
	return 0;
}