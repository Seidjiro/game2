﻿#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int rnum = rand() % 100 + 1, num, tries = 0;
    cout << "\tWelcome to Guess Му Number\n\n";
    cout << "Введите число ";
    cin >> num;

    do
    {
        rnum = rand() % 100+1;
        ++tries;
        if (num < rnum)
        {
            cout << rnum;
            cout << " Слишком большое число!\n\n";
        }
        else if (num > rnum)
        {
            cout << rnum;
            cout << " Слишком маленькое число!\n\n";
        }
        else
        {
            cout << "\n Я угадал! " << tries << " попыток!\n";
        }
    } while (num != rnum);


    return 0;
}
