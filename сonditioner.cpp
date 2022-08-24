#include "ñonditioner.h"

ñonditioner::ñonditioner(int warranty, int avgWorkTime) : electro(warranty), appliances(avgWorkTime)
{
}

void ñonditioner::Show()
{
	cout << "conditioner: warranty " << _warranty << " avgWorkTime " << _avgWorkTime << endl;
}
