#pragma once

#include <iostream>
using namespace std;

class Itecnic
{
public:
    virtual ~Itecnic() = default;
    virtual void Show() = 0 { cout << "Tecnic Item" << endl; };
};


