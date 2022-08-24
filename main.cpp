#include <iostream>
#include "appliances.h"
#include "electro.h"
#include "сonditioner.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Iteсniс* tech[4];

    tech[0] = new refrigerators(36, -12);
    tech[1] = new tv(24, 56.7);
    tech[2] = new wMachine(60, 12);
    tech[3] = new сonditioner(72, 84);

    bool open = true;
    while (open)
    {
        cout << "Выберите технику : 1 - холодильник, 2 - телевизор, 3 - стиральная машина, 4 - кондиционер, 0 чтобы выйти" << endl;
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
            cout << "Выберите технику от 1 до 4 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete tech[0];
    delete tech[1];
    delete tech[2];
    delete tech[3];

    return 0;
}