#pragma once

#include "electro.h"
#include "appliances.h"
class �onditioner final : public appliances, electro
{
public:
	�onditioner(int warranty, int avgWorkTime);
	void Show() override;
};

