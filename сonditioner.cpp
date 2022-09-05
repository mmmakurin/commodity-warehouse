#include "conditioner.h"

conditioner::conditioner(int warranty, int avgWorkTime) : electro(warranty), appliances(avgWorkTime)
{
}

void conditioner::Show()
{
	cout << "conditioner: warranty " << _warranty << endl << "avgWorkTime " << _avgWorkTime << endl;
}
