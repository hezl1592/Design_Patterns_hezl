#include "Builder.h"
#include <iostream>

using namespace std;

void Product::setPartA(const string &s)
{
    this->m_partA = s;
}

void Product::setPartB(const string &s)
{
    this->m_partB = s;
}

void Product::setPartC(const string &s)
{
    this->m_partC = s;
}
// Product::~Product()
// {
// }

ConcreteBuilder::ConcreteBuilder()
{
    this->m_pProduct = new Product();
    cout << "Create empty product" << endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
    delete this->m_pProduct;
    this->m_pProduct = NULL;
}

void ConcreteBuilder::BuildPartA()
{
    this->m_pProduct->setPartA("A");
    cout << "Build PartA " << endl;
}

void ConcreteBuilder::BuildPartB()
{
    this->m_pProduct->setPartB("B");
    cout << "Build PartB " << endl;
}

void ConcreteBuilder::BuildPartC()
{
    this->m_pProduct->setPartC("C");
    cout << "Build PartC " << endl;
}

Product *ConcreteBuilder::GetProduct()
{
    return this->m_pProduct;
}

ConcreteBuilder1::ConcreteBuilder1()
{
    this->m_pProduct = new Product();
    cout << "Create empty product 1" << endl;
}

ConcreteBuilder1::~ConcreteBuilder1()
{
    delete this->m_pProduct;
    this->m_pProduct = NULL;
}

void ConcreteBuilder1::BuildPartA()
{
    this->m_pProduct->setPartA("A");
    cout << "Build PartA " << endl;
}

void ConcreteBuilder1::BuildPartB()
{
    this->m_pProduct->setPartB("B");
    cout << "Build PartB " << endl;
}

void ConcreteBuilder1::BuildPartC()
{
    this->m_pProduct->setPartC("C");
    cout << "Build PartC " << endl;
}

Product *ConcreteBuilder1::GetProduct()
{
    return this->m_pProduct;
}

Director::Director(Builder *bld)
{
    this->_bld = bld;
}

Director::~Director(){
    delete this->_bld;
    this->_bld = NULL;
}

void Director::Construct(){
    this->_bld->BuildPartA();
    this->_bld->BuildPartB();
    this->_bld->BuildPartC();
}

// Product* Director::GetProduct(){
//     return this->_bld->GetProduct()
// }