#include "Strategy.h"
#include <iostream>

using namespace std;

Strategy::~Strategy()
{
    cout << "~Strategy....." << endl;
}
void Strategy::AlgorithmInterface() {}

ConcreteStrategyA::ConcreteStrategyA() {}

ConcreteStrategyA::~ConcreteStrategyA()
{
    cout << "~ConcreteStrategyA....." << endl;
}

void ConcreteStrategyA::AlgorithmInterface()
{
    cout << "test ConcreteStrategyA....." << endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{
}

ConcreteStrategyB::~ConcreteStrategyB()
{
    cout << "~ConcreteStrategyB....." << endl;
}

void ConcreteStrategyB::AlgorithmInterface()
{
    cout << "test ConcreteStrategyB....." << endl;
}

Context::Context(Strategy *stg)
{
    _stg = stg;
}

Context::~Context()
{
    if (!_stg)
        delete _stg;
}

void Context::DoAction()
{
    _stg->AlgorithmInterface();
}