#include "Proxy.h"
#include <iostream>

using namespace std;

Subject::~Subject()
{
    cout << "Subject::~Subject()" << endl;
}

RealSubject::~RealSubject()
{
    cout << "RealSubject::~RealSubject()" << endl;
}

void RealSubject::Request()
{
    cout << "RealSubject......request..." << endl;
}

Proxy::Proxy(Subject *sub)
{
    _sub = sub;
}

Proxy::~Proxy()
{
    if (_sub != NULL)
        delete _sub;
}

void Proxy::Request()
{
    cout << "Proxy request...." << endl;
    _sub->Request();
}