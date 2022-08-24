#pragma once

#include "electro.h"
#include "appliances.h"
class ñonditioner final : public appliances, electro
{
public:
	ñonditioner(int warranty, int avgWorkTime);
	void Show() override;
};

