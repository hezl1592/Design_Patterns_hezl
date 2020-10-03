#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <string>

class Product
{
public:
    Product();
    virtual ~Product() {};
    virtual void ProductPart();
};

class ProductPart
{
public:
    ProductPart();
    virtual ~ProductPart(){};
    ProductPart *BuildPart();
};

class Builder
{
public:
    virtual ~Builder(){};
    virtual void BuildPartA(const std::string &buildPara) = 0;
    virtual void BuildPartB(const std::string &buildPara) = 0;
    virtual void BuildPartC(const std::string &buildPara) = 0;
    virtual Product *GetProduct() = 0;

protected:
    Builder(){};
};

class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder(){};
    ~ConcreteBuilder(){};
    void BuildPartA(const std::string &buildPara);
    void BuildPartB(const std::string &buildPara);
    void BuildPartC(const std::string &buildPara);
    Product *GetProduct();
};

class Director
{
public:
    Director(Builder *bld);
    ~Director() {};
    void Construct();

private:
    Builder *_bld;
};

#endif