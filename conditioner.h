#pragma once

#include "electro.h"
#include "appliances.h"
class conditioner final : public appliances, electro
{
public:
	conditioner(int warranty, int avgWorkTime);
	void Show() override;
};

