#include <iostream>
#include"c_Dices.h"
using namespace std;
int main()
{
    srand(time(0));
    c_Dices d;
    int vibor;
    int n;
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
            cout << "Ener kol throw dice: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                d.Throw_Dice();
                std::cout << "Dice 1: " << d.getD1() << "\tDice 2: " << d.getD2() << "\n";
                system("pause");
                system("cls");
            }
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
    system("cls");
    d.End();
}