#include "�onditioner.h"

�onditioner::�onditioner(int warranty, int avgWorkTime) : electro(warranty), appliances(avgWorkTime)
{
}

void �onditioner::Show()
{
	cout << "conditioner: warranty " << _warranty << " avgWorkTime " << _avgWorkTime << endl;
}
