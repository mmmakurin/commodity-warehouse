#pragma once
#include "Iteñniñ.h"
class appliances : virtual public Iteñniñ
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

