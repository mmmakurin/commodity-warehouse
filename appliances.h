#pragma once
#include "Ite�ni�.h"
class appliances : virtual public Ite�ni�
{
public :
	appliances(int avgWorkTime);
	void Show() override;
protected:
	int _avgWorkTime;
};

class wMachine final: public appliances
{
public:
	wMachine(int avgWorkTime, int rpm);
	void Show() override;
protected:
	int _rpm;
};

