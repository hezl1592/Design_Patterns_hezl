#include <iostream>
#include "Builder.h"

using namespace std;

int main()
{
    Director *dir = new Director(new ConcreteBuilder());
    dir->Construct();
    return 0;
}