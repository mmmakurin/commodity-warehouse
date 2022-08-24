#include "electro.h"

electro::electro(int warranty) : _warranty(warranty)
{
}

void electro::Show()
{
    cout << "Basic electronic warranty: " << _warranty << endl;
}


refrigerators::refrigerators(int warranty, int tChamber) : electro(warranty), _tChamber(tChamber)
{
}

void refrigerators::Show()
{
    cout << "warranty: " << _warranty << " freezer temperature: " << _tChamber << endl;
}

tv::tv(int warranty, double inch) : electro(warranty), _inch(inch)
{
}

void tv::Show()
{
    cout << "warranty: " << _warranty << " tv inch: " << _inch << endl;
}