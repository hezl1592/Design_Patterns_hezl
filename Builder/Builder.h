#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <string>
using namespace std;

class Product
{
private:
    string m_partA;
    string m_partB;
    string m_partC;

public:
    Product(){};
    virtual ~Product(){};

    void setPartA(const string &s);
    void setPartB(const string &s);
    void setPartC(const string &s);
};

//抽象Builder基类，定义不同部分的创建接口

class Builder
{
public:
    Builder(){};
    virtual ~Builder(){};

    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;

    virtual Product *GetProduct() = 0;
};

//  Builder的派生类,实现BuilderPartA和BuilderPartB和BuildPartC接口函数
class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
    virtual Product *GetProduct();

private:
    Product *m_pProduct;
};

class ConcreteBuilder1 : public Builder
{
public:
    ConcreteBuilder1();
    ~ConcreteBuilder1();
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
    virtual Product *GetProduct();

private:
    Product *m_pProduct;
};

class Director
{
public:
    Director(Builder *bld);
    ~Director();
    void Construct();
    // Product *GetProduct();

private:
    Builder *_bld;
};

#endif