#include <iostream>
#include "Builder.h"

using namespace std;

int main()
{
    Director *dir = new Director(new ConcreteBuilder());
    dir->Construct();

    Director *dir1 = new Director(new ConcreteBuilder1());
    dir1->Construct();
    return 0;
}