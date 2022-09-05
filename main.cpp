#include <iostream>
#include "appliances.h"
#include "electro.h"
#include "conditioner.h"
#include "Itecnic.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Itecnic* tech[4];

    tech[0] = new refrigerators(36, -12);
    tech[1] = new tv(24, 56.7);
    tech[2] = new wMachine(60, 12);
    tech[3] = new conditioner(72, 84);

    bool open = true;
    while (open)
    {
        cout << "Choose the equipment: 1 - refrigerator, 2 - TV, 3 - washing machine, 4 - air conditioning, 0 to get out" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            tech[0]->Show();
            break;

        case 2:
            tech[1]->Show();
            break;

        case 3:
            tech[2]->Show();
            break;

        case 4:
            tech[3]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Select a technique from 1 to 4 or 0 to exit" << endl;
            break;
        }
    }
    delete tech[0];
    delete tech[1];
    delete tech[2];
    delete tech[3];

    return 0;
}