#pragma once
#include "Iteñniñ.h"
class electro : virtual public Iteñniñ
{
public:
	electro(int warranty);
	void Show() override;
protected:
	int _warranty;
};

class refrigerators final : public electro
{
public:
	refrigerators(int warranty, int tChamber);
	void Show() override;
protected:
	int _tChamber;
};

class tv final : public electro
{
public:
	tv(int warranty, double inch);
	void Show() override;
protected:
	double _inch;
};

