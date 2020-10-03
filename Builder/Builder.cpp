#include "Builder.h"
#include <iostream>

using namespace std;

Product::Product()
{
    ProductPart();
    cout << "return A product." << endl;
}

// Product::~Product()
// {
// }

void Product::ProductPart()
{
    cout << "build part of product.." << endl;
}

ProductPart::ProductPart()
{
    cout << "build productpart.." << endl;
}

ProductPart *ProductPart::BuildPart()
{
    return new ProductPart;
}

void ConcreteBuilder::BuildPartA(const string &buildPara)
{
    cout << "Step1: Build PartA..." << buildPara << endl;
}

void ConcreteBuilder::BuildPartB(const string &buildPara)
{
    cout << "Step2: Build PartB..." << buildPara << endl;
}

void ConcreteBuilder::BuildPartC(const string &buildPara)
{
    cout << "Step3: Build PartC..." << buildPara << endl;
}

Product *ConcreteBuilder::GetProduct()
{
    BuildPartA(string("pre-defined"));
    BuildPartB(string("pre-defined"));
    BuildPartC(string("pre-defined"));
    return new Product();
}

Director::Director(Builder *bld)
{
    _bld = bld;
}

void Director::Construct()
{
    _bld->BuildPartA("user-defined");
    _bld->BuildPartB("user-defined");
    _bld->BuildPartC("user-defined");
}