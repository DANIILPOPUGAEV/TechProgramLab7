#include <iostream>
#include <string>
#include "Class.h"

using namespace std;
using namespace Class;

void FindName(Watch<short> watchShort[4], Watch<double> watchFloat[4])
{
    string str; short count = 0;

    cout << "������� �������� �������������: ";
    cin >> str;
    system("CLS");
    for (int i = 0; i < 4; i++)
    {
        if (str == watchShort[i].get_name())
            ++count;
    }
    for (int i = 0; i < 4; i++)
    {
        if (str == watchFloat[i].get_name())
            ++count;
    }
    if (count == 0)
        cout << "� ������������ ��� ����� ���������� �������������!" << "\n";
    else
        cout << "���������� ����� ������� �������������: " << count << "\n";
}