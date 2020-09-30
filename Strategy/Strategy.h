#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
    Strategy(/* args */){};
    virtual ~Strategy();
    virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();
    void AlgorithmInterface();
};

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();
    void AlgorithmInterface();
};

// class Strategy;

class Context
{
public:
    Context(Strategy *stg);
    virtual ~Context();
    void DoAction();

private:
    Strategy *_stg;
};

#endif