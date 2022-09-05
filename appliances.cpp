#include "appliances.h"

appliances::appliances(int avgWorkTime) : _avgWorkTime(avgWorkTime)
{
}

void appliances::Show()
{
    cout << "average working time: " << _avgWorkTime << endl;
}


wMachine::wMachine(int avgWorkTime, int rpm) :appliances(avgWorkTime), _rpm(rpm)
{
}

void wMachine::Show()
{
    cout << "average working time: " << _avgWorkTime << endl << "number of revolutions: " << _rpm << endl;
}