#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int rnum = rand() % 100 + 1, num, tries = 0;
    cout << "\tWelcome to Guess �� Number\n\n";
    do
    {
        cout << "������� ����� ";
        cin >> num;
        ++tries;
        if (num > rnum)
        {
            cout << "������� ������� �����!\n\n";
        }
        else if (num < rnum)
        {
            cout << "������� ��������� �����!\n\n";
        }
        else
        {
            cout << "\n �� �������! " << tries << " �������!\n";
        }
    }
    while (num != rnum);


    return 0;
}
