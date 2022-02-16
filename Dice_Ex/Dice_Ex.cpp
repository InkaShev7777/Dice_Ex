#include <iostream>
#include"c_Dices.h"
using namespace std;
int main()
{
    srand(time(0));
    c_Dices d;
    int vibor;
    do
    {
        cout << "\t\tMenu\n";
        cout << "1 - Throw Dice\n";
        cout << "2 - Game Result\n";
        cout << "0 - Exit\n";
        cout << "Enter your choice: ";
        cin >> vibor;
        switch (vibor)
        {
        case 1:
            system("cls");
            d.Throw_Dice();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            d.GameResult();
            system("pause");
            system("cls");
            break;
        }
    } while (vibor != 0);
}

