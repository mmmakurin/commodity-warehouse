#include <iostream>
#include "appliances.h"
#include "electro.h"
#include "�onditioner.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Ite�ni�* tech[4];

    tech[0] = new refrigerators(36, -12);
    tech[1] = new tv(24, 56.7);
    tech[2] = new wMachine(60, 12);
    tech[3] = new �onditioner(72, 84);

    bool open = true;
    while (open)
    {
        cout << "�������� ������� : 1 - �����������, 2 - ���������, 3 - ���������� ������, 4 - �����������, 0 ����� �����" << endl;
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
            cout << "�������� ������� �� 1 �� 4 ��� 0, ����� �����" << endl;
            break;
        }
    }
    delete tech[0];
    delete tech[1];
    delete tech[2];
    delete tech[3];

    return 0;
}